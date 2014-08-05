#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    exp(new Expression),
    akceptuj(new QPushButton)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete exp;
    delete akceptuj;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->getExpression();
    ui->label->setText(exp->Name());
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::getExpression()
{
    exp->setName(ui->textEdit->toPlainText());
}
