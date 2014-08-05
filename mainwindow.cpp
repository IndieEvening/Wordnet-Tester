#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    exp(new Expression),
    akceptuj(new QPushButton)
{
    ui->setupUi(this);
    this->setWindowTitle("Tester wyrażeń Słowosieci");
    ui->rozpocznijTest->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete exp;
    delete akceptuj;
    delete testwindow1;
    delete ui;
}

void MainWindow::on_Wczytaj_clicked()
{
    /*
     * Setting entered text as tested Expression
    */
    exp->setName(ui->textEdit->toPlainText());
    ui->label->setText("Pracujesz nad wyrażeniem: " + exp->Name());
    ui->rozpocznijTest->setVisible(true);
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_rozpocznijTest_clicked()
{
    testwindow1 = new testWindow1;
    testwindow1->setModal(true);
    testwindow1->exec();
}
