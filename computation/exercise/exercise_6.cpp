#include <iostream>


int main()
{
    double x = 0;
    double y = 0;
    char choice = ' ';


    std::cout<<"This is a simple calculator that handles addition, Multiplication, division and subtraction\n";
    std::cout<<"Enter two values followed by the symbol for the operation to be carried out. '+'- for addition, '-'- for subtraction, '*' - for multiplication and '/' for division\n";
    std::cin>>x>>y>>choice;

    switch(choice){
        case '+':
            std::cout<<"The sum of "<<x<<" and "<<y<<" is: "<<x + y<<"\n";
            break;
        case '-':
            std::cout<<"The difference between "<<x<<" and "<<y<<" is: "<<x - y<<"\n";
            break;
        case '*':
            std::cout<<"The product of "<<x<<" and "<<y<<" is "<<x * y<<"\n";
            break;
        case '/':
            std::cout<<"The division of "<<x<<" by "<<y<<" gives "<<x /y<<"\n";
            break;
        default:
            std::cout<<"Unsupported symbol\n";
    }
}
