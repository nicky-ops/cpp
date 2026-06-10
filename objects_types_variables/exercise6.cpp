#include <iostream>


int main()
{
    std::string val1 = "";
    std::string val2 = "";
    std::string val3 = "";

    std::cout<<"Enter 3 String values: ";
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
