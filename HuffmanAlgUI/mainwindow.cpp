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

    std::string stdStrText = text.toStdString();

    // Pasar stdStrText por el algoritmo de compresión

    // Añadir el nuevo texto comprimido a una variable

    // pasarlo a formato QString puede ser con QString str = QString::fromUtf8(nombreVariable.c_str());

    //correr ui->compText->setText(textoComprimido)

    //como acà : este añade el texto que haya escrito en decompText

    ui->decompText->setText(text);
}

void MainWindow::makeConnections()
{
    connect(ui->exceuteBtn, &QPushButton::clicked, this, &MainWindow::onExceuteBtnClicked);
}

