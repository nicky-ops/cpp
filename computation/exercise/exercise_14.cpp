#include <iostream>


int main()
{
    int n = 0;
    std::cout<<"Enter the number: \n";
    std::cin>>n;

    for (int i = 2; i <= n; i++)
    {
        if (i % n != 0)
        {
            std::cout<<i<<" ";
        }
    }
    std::cout<<"\n";
}
