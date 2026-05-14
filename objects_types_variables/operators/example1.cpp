#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Please enter an floating-point value: ";
    double n = 0;
    double divisor = 0;
    std::cin>>n;
    std::cout<<"Please enter a divisor: ";
    std::cin>>divisor;


    std::cout<<"n == " << n
            <<"\nn+1=="<< n+1
            <<"\nthree times n ==" << 3*n
            <<"\ntwice n == "<<n+n
            <<"\nn squared == "<<n*n
            <<"\nhalf of n =="<< n/2
            <<"\nsquare root of n == "<<sqrt(n)
            <<"\nn divided by " <<divisor<<" == "<<n/divisor
            <<'\n';
}
