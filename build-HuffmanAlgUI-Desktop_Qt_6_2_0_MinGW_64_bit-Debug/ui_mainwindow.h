/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *instLabel;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textFieldInput;
    QPushButton *exceuteBtn;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextBrowser *compText;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextBrowser *decompText;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(MainWindow);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        instLabel = new QLabel(MainWindow);
        instLabel->setObjectName(QString::fromUtf8("instLabel"));

        verticalLayout_3->addWidget(instLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textFieldInput = new QTextEdit(MainWindow);
        textFieldInput->setObjectName(QString::fromUtf8("textFieldInput"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(6);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textFieldInput->sizePolicy().hasHeightForWidth());
        textFieldInput->setSizePolicy(sizePolicy);
        textFieldInput->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(textFieldInput);

        exceuteBtn = new QPushButton(MainWindow);
        exceuteBtn->setObjectName(QString::fromUtf8("exceuteBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exceuteBtn->sizePolicy().hasHeightForWidth());
        exceuteBtn->setSizePolicy(sizePolicy1);
        exceuteBtn->setAutoDefault(false);
        exceuteBtn->setFlat(false);

        horizontalLayout->addWidget(exceuteBtn);


        verticalLayout_3->addLayout(horizontalLayout);

        splitter = new QSplitter(MainWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_2);

        compText = new QTextBrowser(widget);
        compText->setObjectName(QString::fromUtf8("compText"));
        compText->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(compText);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        decompText = new QTextBrowser(widget1);
        decompText->setObjectName(QString::fromUtf8("decompText"));
        decompText->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(decompText);

        splitter->addWidget(widget1);

        verticalLayout_3->addWidget(splitter);

        verticalLayout_3->setStretch(2, 3);

        retranslateUi(MainWindow);

        exceuteBtn->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        instLabel->setText(QCoreApplication::translate("MainWindow", "== Ingresa el texto a comprimir ==", nullptr));
        exceuteBtn->setText(QCoreApplication::translate("MainWindow", "Ejecutar Algoritmo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Texto comprimido", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Texto descomprimido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
