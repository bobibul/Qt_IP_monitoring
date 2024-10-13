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
    void sendOnMessage();
    void sendOffMessage();
    void readServerMessage();
    void updateDisplay();
    void gpuSetting();
    void getCPUUsage();
    void getGPUUsage();
    void getMemoryUsage();
    void sendComputingResource();
    void progressBarSetting();
    double QTimeToDouble(const QTime& time);


private:
    Ui::ClientWindow *ui;
    QTcpSocket *tcpSocket;
    QString serverAddress = "172.20.6.37";
    quint16 port = 8080;

    QTimer *timer;          // QTimer 객체
    QTime timeValue;        // QTime 객체를 사용하여 시간 관리
    nvmlDevice_t gpu_device;   // NVML GPU 디바이스 핸들
    QVector<double> computing_resources = {0.0,0.0,0.0,0.0,0.0,0.0};
};
#endif // CLIENTWINDOW_H
