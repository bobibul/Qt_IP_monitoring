#include "serverwindow.h"
#include "ui_serverwindow.h"

ServerWindow::ServerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerWindow)
{
    ui->setupUi(this);
    StartServer();
    connect(tcpServer, &QTcpServer::newConnection, this, &ServerWindow::ClientConnect);

    connect(ui->onButton, &QPushButton::clicked, this, [this]() {
        QTcpSocket* clientSocket = clients[0];
        QString message = "on";
        sendMessageToClient(clientSocket, message);
    });

    connect(ui->offButton, &QPushButton::clicked, this, [this]() {
        QTcpSocket* clientSocket = clients[0];
        QString message = "off";
        sendMessageToClient(clientSocket, message);
    });
}

ServerWindow::~ServerWindow()
{
    delete ui;
    delete tcpServer;

    for(QTcpSocket* socket : clients){
        socket->close();
        socket->deleteLater();
    }
}

void ServerWindow::StartServer(){
    ui->current_state->append("server provided");
    tcpServer = new QTcpServer();

    if(tcpServer->listen(QHostAddress::Any, 8080)){
        ui->current_state->append("Server start");
    }

    else{
        ui->current_state->append("Server start failed");
    }
}

void ServerWindow::ClientConnect(){
    QTcpSocket *clientSocket = tcpServer->nextPendingConnection();
    clients.append(clientSocket);

    ui->current_state->append("클라이언트 연결 : " + clientSocket->peerAddress().toString());
    Device temp_device;
    devices.insert(clientSocket->peerAddress().toString(), temp_device);
    connect(clientSocket, &QTcpSocket::readyRead, this, &ServerWindow::update_status);
    connect(clientSocket, &QTcpSocket::disconnected, this, &ServerWindow::ClientDisconnected);
}

void ServerWindow::ClientDisconnected(){
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    devices.remove(clientSocket->peerAddress().toString());

    if (clientSocket) {
        clientSocket->deleteLater(); // 소켓 메모리 해제
    }

}

void ServerWindow::update_status(){
    for(auto socket : clients){
        QByteArray data = socket->readAll();  // QByteArray로 수신된 데이터 읽기
        QVector<char> buffer(data.begin(), data.end());
        size_t vecSize;
        std::memcpy(&vecSize, buffer.data(), sizeof(size_t));
        QVector<double> vec(vecSize);
        std::memcpy(vec.data(), buffer.data() + sizeof(size_t), vecSize * sizeof(double));

        Device device = devices[socket->peerAddress().toString()];

        device.cpu_usage = vec[0]; // cpu 사용량 저장
        device.gpu0_usage = vec[1];
        device.gpu1_usage = vec[2];
        device.gpu2_usage = vec[3];
        device.elapsed_time = doubleToQTime(vec[4]);
        device.memory_usage = vec[5];
        update_window(device);
        devices[socket->peerAddress().toString()] = device;
    }

}

void ServerWindow::update_window(Device device){
    ui->cpu_usage->setText(QString::number(device.cpu_usage));
    ui->gpu0_usage->setText(QString::number(device.gpu0_usage));
    ui->gpu1_usage->setText(QString::number(device.gpu1_usage));
    ui->gpu2_usage->setText(QString::number(device.gpu2_usage));
    ui->memory_usage->setText(QString::number(device.memory_usage));
    ui->elapsed_time->setText(device.elapsed_time.toString());

    ui->cpu_progressBar->setValue(device.cpu_usage);
    ui->gpu0_progressBar->setValue(device.gpu0_usage);
    ui->gpu1_progressBar->setValue(device.gpu1_usage);
    ui->gpu2_progressBar->setValue(device.gpu2_usage);
    ui->memory_progressBar->setValue(device.memory_usage);
}

QTime ServerWindow::doubleToQTime(double seconds) {
    // 시, 분, 초, 밀리초로 변환
    int hours = static_cast<int>(seconds) / 3600;
    int minutes = (static_cast<int>(seconds) % 3600) / 60;
    int secs = static_cast<int>(seconds) % 60;
    int milliseconds = static_cast<int>((seconds - static_cast<int>(seconds)) * 1000);

    // QTime 객체 생성 및 반환
    return QTime(hours, minutes, secs, milliseconds);
}

void ServerWindow::sendMessageToClient(QTcpSocket* clientSocket, const QString& message){
    QByteArray data = message.toUtf8();
    clientSocket->write(data);
    clientSocket->flush();  // 메시지를 즉시 전송
}


