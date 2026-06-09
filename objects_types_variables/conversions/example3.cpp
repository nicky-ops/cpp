#include <iostream>

// auto - used when the type is obvious from the initializer and we don't want any conversion.
int main()
{
    auto x = 7;
    auto y = 7.7;
    std::cout<<x<<"\n"<<y;
}
