/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *current_state;
    QFrame *frame;
    QLabel *current_time;
    QLabel *label_2;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *cpu_usage;
    QLabel *gpu0_usage;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *memory_usage;
    QFrame *frame_3;
    QPushButton *onButton;
    QPushButton *offButton;
    QLabel *label_13;
    QPushButton *connect;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(777, 427);
        ClientWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(35, 35, 35)"));
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        current_state = new QTextEdit(centralwidget);
        current_state->setObjectName("current_state");
        current_state->setGeometry(QRect(70, 320, 631, 71));
        current_state->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 30, 631, 281));
        frame->setStyleSheet(QString::fromUtf8("background-color:rgb(166, 166, 166)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        current_time = new QLabel(frame);
        current_time->setObjectName("current_time");
        current_time->setGeometry(QRect(360, 100, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        current_time->setFont(font);
        current_time->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 10, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(50, 60, 271, 191));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 230, 230)"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 20, 51, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 50, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 80, 61, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 110, 61, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        cpu_usage = new QLabel(frame_2);
        cpu_usage->setObjectName("cpu_usage");
        cpu_usage->setGeometry(QRect(170, 20, 81, 31));
        cpu_usage->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gpu0_usage = new QLabel(frame_2);
        gpu0_usage->setObjectName("gpu0_usage");
        gpu0_usage->setGeometry(QRect(170, 50, 91, 31));
        gpu0_usage->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(170, 80, 81, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(170, 110, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 140, 131, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage = new QLabel(frame_2);
        memory_usage->setObjectName("memory_usage");
        memory_usage->setGeometry(QRect(170, 140, 91, 31));
        memory_usage->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(550, 80, 71, 151));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:rgb(30, 30, 30)"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        onButton = new QPushButton(frame_3);
        onButton->setObjectName("onButton");
        onButton->setGeometry(QRect(10, 20, 51, 41));
        onButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"background-color:rgb(238, 238, 238)"));
        offButton = new QPushButton(frame_3);
        offButton->setObjectName("offButton");
        offButton->setGeometry(QRect(10, 90, 51, 41));
        offButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"background-color:rgb(238, 238, 238)"));
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(360, 70, 111, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        connect = new QPushButton(frame);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(440, 10, 101, 41));
        connect->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        ClientWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientWindow);
        statusbar->setObjectName("statusbar");
        ClientWindow->setStatusBar(statusbar);

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "ClientWindow", nullptr));
        current_time->setText(QCoreApplication::translate("ClientWindow", "00:00:00", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindow", "DEVICE1", nullptr));
        label_3->setText(QCoreApplication::translate("ClientWindow", "CPU:", nullptr));
        label_4->setText(QCoreApplication::translate("ClientWindow", "GPU0:", nullptr));
        label_5->setText(QCoreApplication::translate("ClientWindow", "GPU0:", nullptr));
        label_6->setText(QCoreApplication::translate("ClientWindow", "GPU0:", nullptr));
        cpu_usage->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        gpu0_usage->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_9->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_10->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_11->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        onButton->setText(QCoreApplication::translate("ClientWindow", "ON", nullptr));
        offButton->setText(QCoreApplication::translate("ClientWindow", "OFF", nullptr));
        label_13->setText(QCoreApplication::translate("ClientWindow", "\354\236\221\353\217\231 \354\213\234\352\260\204", nullptr));
        connect->setText(QCoreApplication::translate("ClientWindow", "CONNECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
