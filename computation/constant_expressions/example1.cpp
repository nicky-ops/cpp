// demonstrating that a value must be assigned to a symbolic constant that is known at compile time
#include <iostream>



int main()
{
    constexpr int max = 100;
    int n;
    std::cin>>n;
    constexpr int c1 = max + 7; //will run without errors value of max is known at compile time
    constexpr int c2 = n + 7; // error: the value of n is not known during compile time.
}
