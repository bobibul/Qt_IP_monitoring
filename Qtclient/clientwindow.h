#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTimer>
#include <QTime>
#include <QProcess>
#include <QDateTime>
#include <nvml.h>
#include <QDataStream>
#include <windows.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class ClientWindow;
}
QT_END_NAMESPACE

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private slots:
    void connectToServer();
    void sendOnMessage(); // 메세지 안보냄
    void sendOffMessage(); // 메세지 안보냄
    void readServerMessage();
    void updateDisplay();
    void gpuSetting();
    void getCPUUsage();
    void getGPUUsage();
    void getMemoryUsage();
    void sendComputingResource();
    void progressBarSetting();
    void startKakaoTalk();
    void offKakaoTalk();
    double QTimeToDouble(const QTime& time);


private:
    Ui::ClientWindow *ui;
    QTcpSocket *tcpSocket;
    QString serverAddress = "127.0.0.1";
    quint16 port = 8080;

    QTimer *timer;          // QTimer 객체
    QTime timeValue;        // QTime 객체를 사용하여 시간 관리
    nvmlDevice_t gpu_device;   // NVML GPU 디바이스 핸들
    QVector<double> computing_resources = {0.0,0.0,0.0,0.0,0.0,0.0};
};
#endif // CLIENTWINDOW_H
