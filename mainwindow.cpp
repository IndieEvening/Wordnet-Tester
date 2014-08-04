#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    exp(new Expression("Kupsko"))
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete exp;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(exp->Name());
}
