// Using const when the value of a symbolic constant is not known at compile time but never changes after initialization
#include <iostream>



int main()
{
    int n;
    std::cin>>n;

    const int c3 = n;
    c3 = 7; // Throws an error: c3 is a constant
}
