#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP
#include <QString>
#include <iostream>
class Expression
{
private:
    QString name;
public:
    Expression();
    Expression(QString);
    ~Expression() {};

    QString Name();
};

#endif // EXPRESSION_HPP
