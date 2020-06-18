#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("test");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    updateButtonLabel();
}

void MainWindow::open()
{

}

void MainWindow::process()
{

}

void MainWindow::save()
{

}

void MainWindow::updateButtonLabel()
{
    //label->setText("текст");
    ui->label->clear();
    ui->pushButton->setText("текст");
    ui->label->setText("Новый текст");
    //this->setFixedWidth(300);

}


