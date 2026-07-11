#include <iostream>


int square_by_addition(int); // declaration of square function

int main()
{
    int input_value = 0;
    std::cout<<"Enter an integer value: \n";
    std::cin>>input_value;
    std::cout<<"The square of "<<input_value<<" is "<<square_by_addition(input_value)<<"\n";
}

int square_by_addition(int a)
{
    int result = 0;
    for (int i = 0; i<a; ++i)
        result += a;
    return result;
}
