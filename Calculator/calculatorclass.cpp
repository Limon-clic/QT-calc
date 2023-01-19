// Райков ИВТ-20
#include "calculatorclass.h"
#include <cmath>
#include <QString>

CalculatorClass::CalculatorClass()                      // конструктор по умолчанию
{
    set_oll(0,PLUS);                                    // op=PLUS - выбрано сложение (позволить начинать не с 0)
}

void CalculatorClass::set_oll(double x, opperator op)  // установить x и op
{
    set_x(x);
    set_op(op);
}

void CalculatorClass::set_x(double x)                   // установить x
{
    this->x=x;
}

void CalculatorClass::set_op(opperator op)              // установить op
{
    this->op=op;
}

double CalculatorClass::get_x()                         // получить x
{
    return x;
}

opperator CalculatorClass::get_op()                     // получить op
{
    return op;
}

double CalculatorClass::calc(double a)                  // вычисления
{
    double r=0;                                         // результат мат. операции

    if (op==NONE)                                       // мат. операция не выбрана
        r=get_x();                                      // x остаётся прежним

    else if (op==PLUS)                                  // сложение
        r=(get_x()+a);

    else if (op==MINUS)                                 // вычитание
        r=(get_x()-a);

    else if (op==MULT)                                  // умножение
        r=(get_x()*a);


    else if (op==DIVISION)                              // деление
    {
        if (a!=0)
            r=(get_x()/a);
        else                                            // если делим на 0, то приводим объект класса к первноначальным значениям
        {
            QString str="Вы пытаетесь разделить на 0!";
            throw str;
        }
    }

    else if (op==POW)                                   // возведение x в степень a
        r=pow(get_x(), a);

    else if (op==SIN)                                   // синус
        r=sin(get_x());

    else if (op==COS)                                   // косинус
        r=cos(get_x());

    else if (op==TAN)                                   // тангенс
        r=tan(get_x());

    else if (op==EXP)                                   // експонента (примерно)
        r=exp(get_x());

    else if (op==LN)                                    // натуральный логарифи (почему-то записывается, как "log")
    {
        if (get_x()>0)
            r=log(get_x());
        else if (get_x()==0)
        {
            QString str="Ln(0) не определен";
            throw str;
        }
        else if (get_x()<0)
        {
            QString str="Я пока не разобрался, как искать Ln от отрицательного числа :)";
            throw str;
        }
    }

    return r;
}
