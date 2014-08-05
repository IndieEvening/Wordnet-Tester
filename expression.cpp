#include "expression.hpp"

Expression::Expression(){
}

Expression::Expression(QString N){
   name = N;
}

QString Expression::Name(){
    return name;
}

void Expression::setName(QString name){
    this->name = name;
}
