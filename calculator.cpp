#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

double Calculator::Percent (double a, double b)
{
    return (0 != int(b)) ? 100 * a / b : -1.0;
}

double Calculator::Div (double a, double b)
{
    return (0 != int(b)) ? a / b : -1.0;
}
