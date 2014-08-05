#include "testwindow1.hpp"
#include "ui_testwindow1.h"

testWindow1::testWindow1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testWindow1)
{
    ui->setupUi(this);
    this->setWindowTitle("Test 1");
}

testWindow1::~testWindow1()
{
    delete ui;
}
