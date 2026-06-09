#include <iostream>


int main()
{
    int x0 = 7.8; // narrows some compilers warn
    int x1 {7.8}; // error: {} doesn't narrow
    int x2 = {7.8}; // error: ={} doesn't narrow (the redundant = is allowed)
    int x3(7.8); // narrows, some compilers warn.

    std::cout<<x0<<x1<<x2<<x3;
}
