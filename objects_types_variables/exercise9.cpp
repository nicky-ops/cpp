#include <iostream>


int main()
{
    std::string operation = "";
    double operand1 = 0;
    double operand2 = 0;
    
    std::cout<<"Enter an operator followed by two operands: ";
    while(std::cin>>operation>>operand1>>operand2)
    {
        if (operation == "+")
        {
            std::cout<<"The sum of the two operands is: "<<operand1 + operand2<<"\n";
        } else if (operation == "-")
        {
            std::cout<<"The difference is: "<<operand1 - operand2<<"\n";
        } else if (operation == "*")
        {
            std::cout<<"The product of the two operands is: "<<operand1 * operand2<<"\n";
        } else if (operation == "/")
        {
            std::cout<<"The result of dividing the two operands is: "<<operand1 / operand2<<"\n";
        }
        std::cout<<"Enter an operator followed by two operands: ";
    }

}
