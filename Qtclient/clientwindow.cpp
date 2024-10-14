#include "clientwindow.h"
#include "ui_clientwindow.h"
#include <iostream>

ClientWindow::ClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow)
    , tcpSocket(new QTcpSocket(this))
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->setInterval(1000); // 1초(1000ms) 간격으로 업데이트
    timeValue.setHMS(0, 0, 0);

    connect(ui->connect, &QPushButton::clicked, this, &ClientWindow::connectToServer);
    connect(ui->onButton, &QPushButton::clicked, this, &ClientWindow::sendOnMessage);
    connect(ui->offButton, &QPushButton::clicked, this, &ClientWindow::sendOffMessage);
    connect(timer, &QTimer::timeout, this, &ClientWindow::updateDisplay);

    ui->onButton->setEnabled(true);
    ui->offButton->setEnabled(false);


    gpuSetting();
    progressBarSetting();
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::connectToServer()
{
    serverAddress = ui->IP_address->text();
    port = ui->server_port->text().toInt();
    tcpSocket->connectToHost(serverAddress, port);

    if (tcpSocket->waitForConnected(3000)) {
        ui->current_state->append("서버에 연결되었습니다.");
        connect(tcpSocket, &QTcpSocket::readyRead, this, &ClientWindow::readServerMessage);
    }

    else {
        ui->current_state->append("서버에 연결하지 못했습니다: " + tcpSocket->errorString());
    }
}

void ClientWindow::sendOnMessage(){

    timer->start();
    ui->onButton->setEnabled(false);
    ui->offButton->setEnabled(true);
    startKakaoTalk();

    // QString message = "on";
    // if (tcpSocket->state() == QTcpSocket::ConnectedState) {
    //     tcpSocket->write(message.toUtf8()); // 서버로 메시지 전송
    // }

    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    ui->current_state->append(currentTime + " 장치 켜짐");
    ui->start_time->setText(currentTime);
}

void ClientWindow::sendOffMessage(){

    timer->stop();
    timeValue.setHMS(0, 0, 0);

    offKakaoTalk();

    QString timeText = timeValue.toString("HH:mm:ss");
    ui->current_time->setText(timeText);  // 라벨에 시간 업데이트

    ui->onButton->setEnabled(true);
    ui->offButton->setEnabled(false);

    // QString message = "off";
    // if (tcpSocket->state() == QTcpSocket::ConnectedState) {
    //     tcpSocket->write(message.toUtf8()); // 서버로 메시지 전송
    // }

    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    ui->current_state->append(currentTime + " 장치 꺼짐");
    ui->end_time->setText(currentTime);
}

void ClientWindow::readServerMessage()
{
    QString message = QString::fromUtf8(tcpSocket->readAll());
    if(message == "on") sendOnMessage();
    else if(message == "off") sendOffMessage();
}

void ClientWindow::updateDisplay(){
    // 타이머 시간을 1초 증가시킴
    timeValue = timeValue.addSecs(1);
    computing_resources[4] = QTimeToDouble(timeValue);
    QString timeText = timeValue.toString("HH:mm:ss");

    getCPUUsage();
    getGPUUsage();
    getMemoryUsage();
    ui->current_time->setText(timeText);  // 라벨에 시간 업데이트
    ui->cpu_usage->setText(QString::number(computing_resources[0], 'f', 1));
    ui->gpu0_usage->setText(QString::number(computing_resources[1], 'f', 1));
    ui->memory_usage_per->setText(QString::number(computing_resources[5], 'f', 1));
    progressBarSetting();
    sendComputingResource();

}

void ClientWindow::gpuSetting(){
    nvmlReturn_t result = nvmlInit();
    if (result != NVML_SUCCESS) {
        std::cout<<"not_init"<<std::endl;
        ui->current_state->append("Failed to initialize NVML: " + QString(nvmlErrorString(result)));
        exit(EXIT_FAILURE);
    }

    // 첫 번째 GPU 디바이스 핸들 가져오기
    result = nvmlDeviceGetHandleByIndex(0, &gpu_device);
    if (result != NVML_SUCCESS) {
        ui->current_state->append("Failed to get device handle: " + QString(nvmlErrorString(result)));
        exit(EXIT_FAILURE);
    }

    // GPU 이름 가져오기
    char name[NVML_DEVICE_NAME_BUFFER_SIZE];
    result = nvmlDeviceGetName(gpu_device, name, NVML_DEVICE_NAME_BUFFER_SIZE);
    if (result != NVML_SUCCESS) {
        ui->current_state->append("Failed to get device name: " + QString(nvmlErrorString(result)));
        exit(EXIT_FAILURE);
    }
    ui->current_state->append("GPU name: " + QString(name));
    ui->gpu0_name->setText(QString(name));

}

void ClientWindow::getCPUUsage(){
    static ULARGE_INTEGER lastCPU, lastSysCPU, lastUserCPU;
    static int numProcessors;
    static bool initialized = false;

    if (!initialized) {
        SYSTEM_INFO sysInfo;
        FILETIME ftime, fsys, fuser;

        GetSystemInfo(&sysInfo);
        numProcessors = sysInfo.dwNumberOfProcessors;

        GetSystemTimeAsFileTime(&ftime);
        memcpy(&lastCPU, &ftime, sizeof(FILETIME));

        GetSystemTimes(&ftime, &fsys, &fuser);
        memcpy(&lastSysCPU, &fsys, sizeof(FILETIME));
        memcpy(&lastUserCPU, &fuser, sizeof(FILETIME));

        initialized = true;
    }

    FILETIME ftime, fsys, fuser;
    ULARGE_INTEGER now, sys, user;
    GetSystemTimeAsFileTime(&ftime);
    memcpy(&now, &ftime, sizeof(FILETIME));

    GetSystemTimes(&ftime, &fsys, &fuser);
    memcpy(&sys, &fsys, sizeof(FILETIME));
    memcpy(&user, &fuser, sizeof(FILETIME));

    double percent = (double)((sys.QuadPart - lastSysCPU.QuadPart) +
                               (user.QuadPart - lastUserCPU.QuadPart));
    percent /= (now.QuadPart - lastCPU.QuadPart);
    percent /= numProcessors;

    lastCPU = now;
    lastSysCPU = sys;
    lastUserCPU = user;
    computing_resources[0] = percent;
}

void ClientWindow::getGPUUsage(){
    nvmlUtilization_t utilization;

    // GPU 사용량 가져오기
    nvmlReturn_t result = nvmlDeviceGetUtilizationRates(gpu_device, &utilization);
    if (result != NVML_SUCCESS) {
        qWarning() << "Failed to get GPU utilization: " << nvmlErrorString(result);
        return;
    }

    computing_resources[1] = static_cast<float>(utilization.gpu);
}

void ClientWindow::getMemoryUsage(){
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);

    DWORDLONG totalPhysMem = memInfo.ullTotalPhys;
    DWORDLONG physMemUsed = memInfo.ullTotalPhys - memInfo.ullAvailPhys;

    double memPercent = (double)physMemUsed / totalPhysMem * 100.0;
    computing_resources[5] = memPercent;
}

void ClientWindow::sendComputingResource(){
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);

    // 벡터 직렬화하여 전송
    out << computing_resources;
    tcpSocket->write(buffer);
}

void ClientWindow::progressBarSetting(){
    ui->cpu_progressBar->setValue(computing_resources[0]);
    ui->gpu0_progressBar->setValue(computing_resources[1]);
    ui->gpu1_progressBar->setValue(computing_resources[2]);
    ui->gpu2_progressBar->setValue(computing_resources[3]);
    ui->memory_progressBar->setValue(computing_resources[5]);
}

double ClientWindow::QTimeToDouble(const QTime& time) {
    // 시, 분, 초, 밀리초 추출
    int hours = time.hour();
    int minutes = time.minute();
    int seconds = time.second();
    int milliseconds = time.msec();

    // 전체 초로 변환 (밀리초는 소수점 이하로 반영)
    double totalSeconds = hours * 3600.0 + minutes * 60.0 + seconds + milliseconds / 1000.0;
    return totalSeconds;
}

void ClientWindow::startKakaoTalk(){
    QString kakaotalkFilePath = "C:\\Program Files (x86)\\Kakao\\KakaoTalk\\KakaoTalk.exe";
    QProcess::startDetached(kakaotalkFilePath);
}

void ClientWindow::offKakaoTalk(){
    QProcess process;
    process.start("taskkill", QStringList() << "/F" << "/IM" << "KakaoTalk.exe");
    process.waitForFinished();
}



