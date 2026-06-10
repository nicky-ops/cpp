#include <iostream>


int main()
{
    double val1 = 0.0;
    double val2 = 0.0;
    std::cout<<"Enter two floating point values: ";
    std::cin>>val1>>val2;
    if (val1 > val2)
    {
        std::cout<<val1<<" is greater than "<<val2<<"\n";
    } else
    {
        std::cout<<val2<<" is greater than "<<val1<<"\n";
    }
    std::cout<<"The sum of the two values is: "<<val1 + val2<<"\n";
    std::cout<<"The difference between the two values is: "<<val1 - val2<<"\n";
    std::cout<<"The product of the two values is: "<<val1 * val2<<"\n";
    std::cout<<"The ratio between the two values is: "<<val1 / val2<<"\n";
}
