#include <iostream>


int main()
{
    int value = 0;
    std::cout<<"Enter an integer value: ";
    while(std::cin>>value)
    {
        if (value % 2 == 0)
        {
            std::cout<<"The value "<<value<<" is an even number\n";
        } else
        {
            std::cout<<"The value "<<value<<" is an odd number\n";
        }
        std::cout<<"Enter another integer value: ";
    }
}
