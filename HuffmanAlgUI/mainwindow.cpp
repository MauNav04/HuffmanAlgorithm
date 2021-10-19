#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    makeConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onExceuteBtnClicked()
{
    QString text = ui->textFieldInput->toPlainText();

    encoderInstance.Compress(text.toStdString());

    QString encodedText = QString::fromStdString(encoderInstance.getEncodedText());

    ui->compText->setText(encodedText);

    encoderInstance.Decompress(encodedText.toStdString());

    QString decompressedText = QString::fromStdString(encoderInstance.getDecodedText());

    ui->decompText->setText(decompressedText);
}

void MainWindow::makeConnections()
{
    connect(ui->exceuteBtn, &QPushButton::clicked, this, &MainWindow::onExceuteBtnClicked);
}

