#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QVector>
#include <QTime>
#include <QMap>


QT_BEGIN_NAMESPACE
namespace Ui {
class ServerWindow;
}
QT_END_NAMESPACE

class ServerWindow : public QMainWindow
{
    Q_OBJECT

public:
    ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();

    struct Device
    {
        float cpu_usage = 0.0;
        float gpu0_usage = 0.0;
        float gpu1_usage = 0.0;
        float gpu2_usage = 0.0;
        float memory_usage = 0.0;
        QTime elapsed_time = QTime(0, 0, 0);
    };

    void StartServer();
    void ClientConnect();
    void ClientDisconnected();
    void sendMessageToClient(QTcpSocket* clientSocket, const QString& message);
    void control_all(bool on_or_off);
    void update_status();
    void update_window(Device device);
    QTime doubleToQTime(double seconds);




private:
    Ui::ServerWindow *ui;
    QTcpServer *tcpServer;
    QVector<QTcpSocket*> clients;
    QMap<QString, Device> devices;
};



#endif // SERVERWINDOW_H
