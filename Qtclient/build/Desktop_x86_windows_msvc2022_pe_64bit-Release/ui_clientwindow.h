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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
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
    QFrame *frame_2;
    QLabel *cpu_name;
    QLabel *cpu_usage;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *memory_usage;
    QProgressBar *cpu_progressBar;
    QLabel *cpu_name_2;
    QLabel *cpu_name_3;
    QFrame *frame_3;
    QPushButton *onButton;
    QPushButton *offButton;
    QFrame *frame_4;
    QLabel *cpu_name_4;
    QLabel *gpu1_usage;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *memory_usage_2;
    QProgressBar *gpu1_progressBar;
    QLabel *cpu_name_5;
    QLabel *cpu_name_6;
    QFrame *frame_5;
    QLabel *cpu_name_7;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *memory_usage_3;
    QProgressBar *gpu0_progressBar;
    QLabel *cpu_name_8;
    QLabel *gpu0_name;
    QLabel *gpu0_usage;
    QFrame *frame_6;
    QLabel *cpu_name_10;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *memory_usage_4;
    QProgressBar *gpu2_progressBar;
    QLabel *cpu_name_11;
    QLabel *cpu_name_12;
    QLabel *gpu2_usage;
    QFrame *frame_7;
    QLabel *cpu_name_13;
    QLabel *label_23;
    QLabel *memory_usage_5;
    QProgressBar *memory_progressBar;
    QLabel *cpu_name_14;
    QLabel *cpu_name_15;
    QLabel *memory_usage_per;
    QFrame *frame_8;
    QLabel *gpu0_usage_6;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *memory_usage_6;
    QLabel *current_time;
    QLabel *cpu_name_16;
    QLabel *start_time;
    QLabel *cpu_name_26;
    QLabel *end_time;
    QFrame *frame_10;
    QLabel *gpu0_usage_9;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *memory_usage_9;
    QLabel *cpu_name_24;
    QLabel *cpu_usage_8;
    QLabel *cpu_usage_9;
    QPushButton *connect;
    QFrame *frame_9;
    QLabel *gpu0_usage_8;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *memory_usage_8;
    QLabel *cpu_name_22;
    QLabel *cpu_name_25;
    QLineEdit *IP_address;
    QLabel *cpu_name_27;
    QLineEdit *server_port;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(930, 500);
        ClientWindow->setMinimumSize(QSize(930, 500));
        ClientWindow->setMaximumSize(QSize(930, 500));
        ClientWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(55, 55, 55);"));
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        current_state = new QTextEdit(centralwidget);
        current_state->setObjectName("current_state");
        current_state->setGeometry(QRect(30, 400, 621, 71));
        current_state->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        current_state->setReadOnly(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 20, 881, 361));
        frame->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame->setStyleSheet(QString::fromUtf8("background-color:rgb(166, 166, 166);\n"
"border-style:solid;\n"
"border-radius: 5px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 30, 361, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        cpu_name = new QLabel(frame_2);
        cpu_name->setObjectName("cpu_name");
        cpu_name->setGeometry(QRect(20, 10, 41, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        cpu_name->setFont(font);
        cpu_name->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        cpu_usage = new QLabel(frame_2);
        cpu_usage->setObjectName("cpu_usage");
        cpu_usage->setGeometry(QRect(200, 30, 111, 51));
        cpu_usage->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        cpu_usage->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        cpu_usage->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
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
        cpu_progressBar = new QProgressBar(frame_2);
        cpu_progressBar->setObjectName("cpu_progressBar");
        cpu_progressBar->setGeometry(QRect(10, 40, 171, 41));
        cpu_progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	background-color : rgb(200, 200, 200);\n"
"	border-style:solid;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius:10px;	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(6, 160, 191, 255), stop:1 rgba(255, 255, 255, 255));\n"
"		\n"
"}"));
        cpu_progressBar->setValue(24);
        cpu_progressBar->setTextVisible(false);
        cpu_name_2 = new QLabel(frame_2);
        cpu_name_2->setObjectName("cpu_name_2");
        cpu_name_2->setGeometry(QRect(320, 40, 21, 21));
        cpu_name_2->setFont(font);
        cpu_name_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_name_3 = new QLabel(frame_2);
        cpu_name_3->setObjectName("cpu_name_3");
        cpu_name_3->setGeometry(QRect(60, 10, 171, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        cpu_name_3->setFont(font1);
        cpu_name_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(760, 150, 111, 171));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        onButton = new QPushButton(frame_3);
        onButton->setObjectName("onButton");
        onButton->setGeometry(QRect(10, 10, 91, 71));
        onButton->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"background-color:rgb(238, 238, 238);\n"
"color:rgb(255, 0, 0)"));
        offButton = new QPushButton(frame_3);
        offButton->setObjectName("offButton");
        offButton->setGeometry(QRect(10, 90, 91, 71));
        offButton->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"background-color:rgb(238, 238, 238);"));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(30, 130, 361, 91));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        cpu_name_4 = new QLabel(frame_4);
        cpu_name_4->setObjectName("cpu_name_4");
        cpu_name_4->setGeometry(QRect(20, 10, 51, 21));
        cpu_name_4->setFont(font);
        cpu_name_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        gpu1_usage = new QLabel(frame_4);
        gpu1_usage->setObjectName("gpu1_usage");
        gpu1_usage->setGeometry(QRect(210, 30, 101, 51));
        gpu1_usage->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        gpu1_usage->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        gpu1_usage->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_13 = new QLabel(frame_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(170, 110, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 140, 131, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_2 = new QLabel(frame_4);
        memory_usage_2->setObjectName("memory_usage_2");
        memory_usage_2->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gpu1_progressBar = new QProgressBar(frame_4);
        gpu1_progressBar->setObjectName("gpu1_progressBar");
        gpu1_progressBar->setGeometry(QRect(10, 40, 171, 41));
        gpu1_progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	background-color : rgb(200, 200, 200);\n"
"	border-style:solid;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius:10px;	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(6, 160, 191, 255), stop:1 rgba(255, 255, 255, 255));\n"
"		\n"
"}"));
        gpu1_progressBar->setValue(24);
        gpu1_progressBar->setTextVisible(false);
        cpu_name_5 = new QLabel(frame_4);
        cpu_name_5->setObjectName("cpu_name_5");
        cpu_name_5->setGeometry(QRect(320, 40, 21, 21));
        cpu_name_5->setFont(font);
        cpu_name_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_name_6 = new QLabel(frame_4);
        cpu_name_6->setObjectName("cpu_name_6");
        cpu_name_6->setGeometry(QRect(70, 10, 181, 21));
        cpu_name_6->setFont(font1);
        cpu_name_6->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(400, 30, 351, 91));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        cpu_name_7 = new QLabel(frame_5);
        cpu_name_7->setObjectName("cpu_name_7");
        cpu_name_7->setGeometry(QRect(20, 10, 51, 21));
        cpu_name_7->setFont(font);
        cpu_name_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        label_16 = new QLabel(frame_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(170, 110, 91, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 140, 131, 31));
        label_17->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_3 = new QLabel(frame_5);
        memory_usage_3->setObjectName("memory_usage_3");
        memory_usage_3->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gpu0_progressBar = new QProgressBar(frame_5);
        gpu0_progressBar->setObjectName("gpu0_progressBar");
        gpu0_progressBar->setGeometry(QRect(10, 40, 171, 41));
        gpu0_progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	background-color : rgb(200, 200, 200);\n"
"	border-style:solid;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius:10px;	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(6, 160, 191, 255), stop:1 rgba(255, 255, 255, 255));\n"
"		\n"
"}"));
        gpu0_progressBar->setValue(24);
        gpu0_progressBar->setTextVisible(false);
        cpu_name_8 = new QLabel(frame_5);
        cpu_name_8->setObjectName("cpu_name_8");
        cpu_name_8->setGeometry(QRect(310, 40, 21, 21));
        cpu_name_8->setFont(font);
        cpu_name_8->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        gpu0_name = new QLabel(frame_5);
        gpu0_name->setObjectName("gpu0_name");
        gpu0_name->setGeometry(QRect(70, 10, 171, 21));
        gpu0_name->setFont(font1);
        gpu0_name->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        gpu0_usage = new QLabel(frame_5);
        gpu0_usage->setObjectName("gpu0_usage");
        gpu0_usage->setGeometry(QRect(200, 30, 101, 51));
        gpu0_usage->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        gpu0_usage->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        gpu0_usage->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(400, 130, 351, 91));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        cpu_name_10 = new QLabel(frame_6);
        cpu_name_10->setObjectName("cpu_name_10");
        cpu_name_10->setGeometry(QRect(20, 10, 51, 21));
        cpu_name_10->setFont(font);
        cpu_name_10->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        label_19 = new QLabel(frame_6);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(170, 110, 91, 31));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_20 = new QLabel(frame_6);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 140, 131, 31));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_4 = new QLabel(frame_6);
        memory_usage_4->setObjectName("memory_usage_4");
        memory_usage_4->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_4->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        gpu2_progressBar = new QProgressBar(frame_6);
        gpu2_progressBar->setObjectName("gpu2_progressBar");
        gpu2_progressBar->setGeometry(QRect(10, 40, 171, 41));
        gpu2_progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	background-color : rgb(200, 200, 200);\n"
"	border-style:solid;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius:10px;	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(6, 160, 191, 255), stop:1 rgba(255, 255, 255, 255));\n"
"		\n"
"}"));
        gpu2_progressBar->setValue(24);
        gpu2_progressBar->setTextVisible(false);
        cpu_name_11 = new QLabel(frame_6);
        cpu_name_11->setObjectName("cpu_name_11");
        cpu_name_11->setGeometry(QRect(310, 40, 21, 21));
        cpu_name_11->setFont(font);
        cpu_name_11->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_name_12 = new QLabel(frame_6);
        cpu_name_12->setObjectName("cpu_name_12");
        cpu_name_12->setGeometry(QRect(70, 10, 171, 21));
        cpu_name_12->setFont(font1);
        cpu_name_12->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        gpu2_usage = new QLabel(frame_6);
        gpu2_usage->setObjectName("gpu2_usage");
        gpu2_usage->setGeometry(QRect(190, 30, 111, 51));
        gpu2_usage->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        gpu2_usage->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        gpu2_usage->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(400, 230, 351, 91));
        frame_7->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        cpu_name_13 = new QLabel(frame_7);
        cpu_name_13->setObjectName("cpu_name_13");
        cpu_name_13->setGeometry(QRect(20, 10, 71, 16));
        cpu_name_13->setFont(font);
        cpu_name_13->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        label_23 = new QLabel(frame_7);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 140, 131, 31));
        label_23->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_5 = new QLabel(frame_7);
        memory_usage_5->setObjectName("memory_usage_5");
        memory_usage_5->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_5->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_progressBar = new QProgressBar(frame_7);
        memory_progressBar->setObjectName("memory_progressBar");
        memory_progressBar->setGeometry(QRect(10, 40, 171, 41));
        memory_progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	background-color : rgb(200, 200, 200);\n"
"	border-style:solid;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"	border-radius:10px;	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(6, 160, 191, 255), stop:1 rgba(255, 255, 255, 255));\n"
"		\n"
"}"));
        memory_progressBar->setValue(24);
        memory_progressBar->setTextVisible(false);
        cpu_name_14 = new QLabel(frame_7);
        cpu_name_14->setObjectName("cpu_name_14");
        cpu_name_14->setGeometry(QRect(310, 40, 21, 21));
        cpu_name_14->setFont(font);
        cpu_name_14->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_name_15 = new QLabel(frame_7);
        cpu_name_15->setObjectName("cpu_name_15");
        cpu_name_15->setGeometry(QRect(100, 10, 141, 20));
        cpu_name_15->setFont(font1);
        cpu_name_15->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        memory_usage_per = new QLabel(frame_7);
        memory_usage_per->setObjectName("memory_usage_per");
        memory_usage_per->setGeometry(QRect(190, 30, 111, 51));
        memory_usage_per->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        memory_usage_per->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        memory_usage_per->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        frame_8 = new QFrame(frame);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(30, 230, 361, 91));
        frame_8->setStyleSheet(QString::fromUtf8("background-color:rgb(50, 50, 50);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        gpu0_usage_6 = new QLabel(frame_8);
        gpu0_usage_6->setObjectName("gpu0_usage_6");
        gpu0_usage_6->setGeometry(QRect(210, 80, 91, 31));
        gpu0_usage_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_24 = new QLabel(frame_8);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(170, 80, 81, 31));
        label_24->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_25 = new QLabel(frame_8);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(170, 110, 91, 31));
        label_25->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_26 = new QLabel(frame_8);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(30, 140, 131, 31));
        label_26->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_6 = new QLabel(frame_8);
        memory_usage_6->setObjectName("memory_usage_6");
        memory_usage_6->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_6->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        current_time = new QLabel(frame_8);
        current_time->setObjectName("current_time");
        current_time->setGeometry(QRect(130, 20, 231, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font2.setPointSize(40);
        font2.setBold(true);
        font2.setItalic(false);
        current_time->setFont(font2);
        current_time->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color:rgb(255, 255, 255)"));
        cpu_name_16 = new QLabel(frame_8);
        cpu_name_16->setObjectName("cpu_name_16");
        cpu_name_16->setGeometry(QRect(10, 0, 71, 21));
        cpu_name_16->setFont(font1);
        cpu_name_16->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        start_time = new QLabel(frame_8);
        start_time->setObjectName("start_time");
        start_time->setGeometry(QRect(10, 20, 121, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225")});
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setItalic(false);
        start_time->setFont(font3);
        start_time->setStyleSheet(QString::fromUtf8("font: 700 8pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(200, 200, 200)"));
        cpu_name_26 = new QLabel(frame_8);
        cpu_name_26->setObjectName("cpu_name_26");
        cpu_name_26->setGeometry(QRect(10, 40, 51, 21));
        cpu_name_26->setFont(font1);
        cpu_name_26->setStyleSheet(QString::fromUtf8("font: 700 9pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(155, 155, 155)"));
        end_time = new QLabel(frame_8);
        end_time->setObjectName("end_time");
        end_time->setGeometry(QRect(10, 60, 121, 21));
        end_time->setFont(font3);
        end_time->setStyleSheet(QString::fromUtf8("font: 700 8pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(200, 200, 200)"));
        frame_10 = new QFrame(frame);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(760, 30, 111, 81));
        frame_10->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        gpu0_usage_9 = new QLabel(frame_10);
        gpu0_usage_9->setObjectName("gpu0_usage_9");
        gpu0_usage_9->setGeometry(QRect(210, 80, 91, 31));
        gpu0_usage_9->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_33 = new QLabel(frame_10);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(170, 80, 81, 31));
        label_33->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_34 = new QLabel(frame_10);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(170, 110, 91, 31));
        label_34->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_35 = new QLabel(frame_10);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(30, 140, 131, 31));
        label_35->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_9 = new QLabel(frame_10);
        memory_usage_9->setObjectName("memory_usage_9");
        memory_usage_9->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_9->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        cpu_name_24 = new QLabel(frame_10);
        cpu_name_24->setObjectName("cpu_name_24");
        cpu_name_24->setGeometry(QRect(280, 30, 21, 21));
        cpu_name_24->setFont(font);
        cpu_name_24->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_usage_8 = new QLabel(frame_10);
        cpu_usage_8->setObjectName("cpu_usage_8");
        cpu_usage_8->setGeometry(QRect(210, 20, 61, 51));
        cpu_usage_8->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        cpu_usage_8->setStyleSheet(QString::fromUtf8("font: 700 40pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        cpu_usage_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        cpu_usage_9 = new QLabel(frame_10);
        cpu_usage_9->setObjectName("cpu_usage_9");
        cpu_usage_9->setGeometry(QRect(10, 0, 91, 31));
        cpu_usage_9->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        cpu_usage_9->setStyleSheet(QString::fromUtf8("font: 700 13pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);"));
        cpu_usage_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        connect = new QPushButton(frame_10);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(10, 30, 91, 41));
        connect->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(52, 52, 52);"));
        frame_9 = new QFrame(centralwidget);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(660, 400, 251, 81));
        frame_9->setStyleSheet(QString::fromUtf8("background-color:rgb(100, 100, 100);\n"
"border-style:solid;\n"
"border-radius: 10px;"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        gpu0_usage_8 = new QLabel(frame_9);
        gpu0_usage_8->setObjectName("gpu0_usage_8");
        gpu0_usage_8->setGeometry(QRect(210, 80, 91, 31));
        gpu0_usage_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_30 = new QLabel(frame_9);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(170, 80, 81, 31));
        label_30->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_31 = new QLabel(frame_9);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(170, 110, 91, 31));
        label_31->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        label_32 = new QLabel(frame_9);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(30, 140, 131, 31));
        label_32->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        memory_usage_8 = new QLabel(frame_9);
        memory_usage_8->setObjectName("memory_usage_8");
        memory_usage_8->setGeometry(QRect(170, 140, 91, 31));
        memory_usage_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        cpu_name_22 = new QLabel(frame_9);
        cpu_name_22->setObjectName("cpu_name_22");
        cpu_name_22->setGeometry(QRect(280, 30, 21, 21));
        cpu_name_22->setFont(font);
        cpu_name_22->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(186, 186, 186);"));
        cpu_name_25 = new QLabel(frame_9);
        cpu_name_25->setObjectName("cpu_name_25");
        cpu_name_25->setGeometry(QRect(10, 10, 141, 31));
        cpu_name_25->setFont(font);
        cpu_name_25->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        IP_address = new QLineEdit(frame_9);
        IP_address->setObjectName("IP_address");
        IP_address->setGeometry(QRect(10, 40, 131, 22));
        IP_address->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        IP_address->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cpu_name_27 = new QLabel(frame_9);
        cpu_name_27->setObjectName("cpu_name_27");
        cpu_name_27->setGeometry(QRect(180, 10, 41, 31));
        cpu_name_27->setFont(font);
        cpu_name_27->setStyleSheet(QString::fromUtf8("font: 700 12pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";\n"
"color: rgb(255, 255, 255)"));
        server_port = new QLineEdit(frame_9);
        server_port->setObjectName("server_port");
        server_port->setGeometry(QRect(160, 40, 81, 22));
        server_port->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font: 10pt \"\353\247\221\354\235\200 \352\263\240\353\224\225\";"));
        server_port->setAlignment(Qt::AlignmentFlag::AlignCenter);
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
        cpu_name->setText(QCoreApplication::translate("ClientWindow", "CPU", nullptr));
        cpu_usage->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_11->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_2->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_name_3->setText(QCoreApplication::translate("ClientWindow", "devicename", nullptr));
        onButton->setText(QCoreApplication::translate("ClientWindow", "ON", nullptr));
        offButton->setText(QCoreApplication::translate("ClientWindow", "OFF", nullptr));
        cpu_name_4->setText(QCoreApplication::translate("ClientWindow", "GPU1", nullptr));
        gpu1_usage->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        label_13->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_14->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_2->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_5->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_name_6->setText(QCoreApplication::translate("ClientWindow", "devicename", nullptr));
        cpu_name_7->setText(QCoreApplication::translate("ClientWindow", "GPU0", nullptr));
        label_16->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_17->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_3->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_8->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        gpu0_name->setText(QCoreApplication::translate("ClientWindow", "devicename", nullptr));
        gpu0_usage->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        cpu_name_10->setText(QCoreApplication::translate("ClientWindow", "GPU2", nullptr));
        label_19->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_20->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_4->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_11->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_name_12->setText(QCoreApplication::translate("ClientWindow", "devicename", nullptr));
        gpu2_usage->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        cpu_name_13->setText(QCoreApplication::translate("ClientWindow", "MEMORY", nullptr));
        label_23->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_5->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_14->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_name_15->setText(QCoreApplication::translate("ClientWindow", "devicename", nullptr));
        memory_usage_per->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        gpu0_usage_6->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_24->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_25->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_26->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_6->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        current_time->setText(QCoreApplication::translate("ClientWindow", "00:00:00", nullptr));
        cpu_name_16->setText(QCoreApplication::translate("ClientWindow", "start time", nullptr));
        start_time->setText(QCoreApplication::translate("ClientWindow", "2024-10-11 00:00:00", nullptr));
        cpu_name_26->setText(QCoreApplication::translate("ClientWindow", "end time", nullptr));
        end_time->setText(QCoreApplication::translate("ClientWindow", "2024-10-11 00:00:00", nullptr));
        gpu0_usage_9->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_33->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_34->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_35->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_9->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_24->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_usage_8->setText(QCoreApplication::translate("ClientWindow", "0", nullptr));
        cpu_usage_9->setText(QCoreApplication::translate("ClientWindow", "device1", nullptr));
        connect->setText(QCoreApplication::translate("ClientWindow", "CONNECT", nullptr));
        gpu0_usage_8->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_30->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_31->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        label_32->setText(QCoreApplication::translate("ClientWindow", "MEMORY:", nullptr));
        memory_usage_8->setText(QCoreApplication::translate("ClientWindow", "0%", nullptr));
        cpu_name_22->setText(QCoreApplication::translate("ClientWindow", "%", nullptr));
        cpu_name_25->setText(QCoreApplication::translate("ClientWindow", "server IP address", nullptr));
        IP_address->setText(QCoreApplication::translate("ClientWindow", "172.20.6.37", nullptr));
        cpu_name_27->setText(QCoreApplication::translate("ClientWindow", "port", nullptr));
        server_port->setText(QCoreApplication::translate("ClientWindow", "8080", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
