#include <iostream>
#include <stdexcept>
#include "inc/calculator.hpp"

void menu(void);

int main()
{
    int first_num,second_num,choice,task;
    std::cout << "\n\n-----------------CALCULATOR--------------------\n\n" << std::endl;

    while(true)
    {
        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "Press '1' to continue" << std::endl;
        std::cout << "Press '2' to quit" << std::endl;
        std::cout << "Please select one option: ";
        std::cin >> choice;


        if(choice ==  1)
        {
            std::cout <<"\n\n"<< "Enter two integers " << std::endl;
            std::cout << "First number: " ;
            std::cin >> first_num;
            std::cout << "Second number: ";
            std::cin >> second_num;
            std::cout << std::endl;

            menu();

            std::cout << "\nSelect the number for your operation : ";
            std::cin >> task;
            std::cout << std::endl;

            Calculator *cptr = new Calculator(first_num,second_num);

            switch (task)
            {
                while(true)
                {
                    case 1:
                        std::cout << "Sum = " << cptr->add() << std::endl;
                        delete cptr;
                        break;

                    case 2:
                        std::cout << "Difference = " << cptr->sub() << std::endl;
                        delete cptr;
                        break;
                    
                    case 3:
                        std::cout << "Multiply = " << cptr->mul() << std::endl;
                        delete cptr;
                        break;

                    case 4:
                        try
                        {   
                            if (second_num == 0)
                            {   
                                throw std::runtime_error("ERROR: Denominator cannot be zero");
                            }
                        }
                        catch(const std::exception &e)
                        {
                            std::cout << e.what() << std::endl;
                            break;
                        }

                        std::cout << "Divide = " << cptr->div() << std::endl;
                        delete cptr;
                        break;

                    default:
                        std::cout << "Please enter a valid choice " << std::endl;
                        break;
                }
            }
        }
        else if(choice == 2)
        {
            std::cout << "\n---------------Exiting the program----------------\n" << std::endl;
            break;
        }
        else 
        {
            std::cout << "Please select either 1(continue) or 2(quit)." << std::endl; 
        }
    }
}

void menu(void)
{
    std::cout << "\n\n" << "-----------------------Operations---------------------" << std::endl;
    std::cout << "Please select :-" << std::endl;
    std::cout << "'1' for Addition" << std::endl;
    std::cout << "'2' for Subtraction" << std::endl;
    std::cout << "'3' for Multiplication" << std::endl;
    std::cout << "'4' for Division" << std::endl;
    std::cout << std::endl; 
}