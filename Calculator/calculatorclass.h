// Райков ИВТ-20
#ifndef CALCULATORCLASS_H
#define CALCULATORCLASS_H

enum opperator          // перечисление возможных мат. операций
{
    NONE,
    PLUS,
    MINUS,
    MULT,
    DIVISION,
    POW,
    SIN,
    COS,
    TAN,
    EXP,
    LN
};

class CalculatorClass
{
private:
    double x;           // первая переменная/ответ
    opperator op;       // узнаём, какая мат. операция выбрана (оператор)
public:
    void set_x(double x);
    void set_op(opperator op);
    void set_oll(double x, opperator op);

    double get_x();
    opperator get_op();

    double calc(double a);
    CalculatorClass();
};

#endif // CALCULATORCLASS_H
