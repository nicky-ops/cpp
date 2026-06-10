#include <iostream>


int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    std::cout<<"Enter 3 integer values: ";
    while(std::cin>>val1>>val2>>val3)
    {
        if (val1 >= val2 and val2 >= val3 and val1 >= val3)
        {
            std::cout<<val3<<", "<<val2<<", "<<val1<<".\n";
        } else if (val1 >= val2 and val2 <= val3 and val1 >= val3)
        {
            std::cout<<val2<<", "<<val3<<", "<<val1<<".\n";
        } else if (val1 <= val2 and val2 >= val3 and val1 >= val3)
        {
            std::cout<<val3<<", "<<val1<<", "<<val2<<".\n";
        } else if (val1 >= val2 and val2 <= val3 and val1 <= val3)
        {
            std::cout<<val2<<", "<<val1<<", "<<val3<<".\n";
        } else if (val1 <= val2 and val2 >= val3 and val1 <= val3)
        {
            std::cout<<val1<<", "<<val3<<", "<<val2<<".\n";
        } else if (val1 <= val2 and val2 <= val3 and val1 <= val3)
        {
            std::cout<<val1<<", "<<val2<<", "<<val3<<".\n";
        }
    }
}
