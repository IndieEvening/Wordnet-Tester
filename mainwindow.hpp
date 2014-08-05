#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <expression.hpp>
#include <QPushButton>
#include "testwindow1.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Wczytaj_clicked();
    void on_actionExit_triggered();

    void on_rozpocznijTest_clicked();

private:
    Expression* exp;
    Ui::MainWindow* ui;
    QPushButton* akceptuj;
    testWindow1* testwindow1;
};

#endif // MAINWINDOW_HPP
