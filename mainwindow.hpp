#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <expression.hpp>
#include <QPushButton>

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
    void on_pushButton_clicked();
    void on_actionExit_triggered();

private:
    Expression* exp;
    Ui::MainWindow* ui;
    QPushButton* akceptuj;
    void getExpression();
};

#endif // MAINWINDOW_HPP
