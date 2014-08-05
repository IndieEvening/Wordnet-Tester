#ifndef TESTWINDOW1_HPP
#define TESTWINDOW1_HPP

#include <QDialog>

namespace Ui {
class testWindow1;
}

class testWindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit testWindow1(QWidget *parent = 0);
    ~testWindow1();

private:
    Ui::testWindow1 *ui;
};

#endif // TESTWINDOW1_HPP
