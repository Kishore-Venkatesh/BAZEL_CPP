#include "inc/calculator.hpp"

Calculator::Calculator(int a,int b):num1(a),num2(b)
{
    /*No implementation*/
}

Calculator::~Calculator()
{
    /*No implementation*/
}

Calculator::Calculator(const Calculator &obj):num1(obj.num1),num2(obj.num2)
{
    /*No implementation*/
}

Calculator& Calculator::operator=(const Calculator &other)
{
    if(this == &other)
    {
        return *this;
    }

    num1 = other.num1;
    num2 = other.num2;

    return *this;
}

int Calculator::add(void)
{
    return num1+num2;
}

int Calculator::sub(void)
{
    return num1-num2;
}

int Calculator::mul(void)
{
    return num1*num2;
}

int Calculator::div(void)
{
    if(num2 != 0)
    {
        if(num1 < num2)
        {
            return 0;
        }
        else
        {
            return num1/num2;
        }
    }
}
