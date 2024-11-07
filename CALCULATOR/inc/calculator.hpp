#ifndef __CALCULATOR_HPP__
#define __CALCULATOR_HPP__

class Calculator
{
    private:
        int num1,num2;

    public:
        Calculator(int a,int b);

        ~Calculator();

        Calculator(const Calculator &obj);

        Calculator& operator=(const Calculator &other);

        int add(void);

        int sub(void);

        int mul(void);

        int div(void);

};

#endif    // __CALCULATOR_HPP__
