#include <iostream>


int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = c+1000;
    double d = i2+7.3;
    std::cout<<"A character c with the value"<<c<<" is converted to an integer to have the value "<<i1<<" whereas an integer i2: "<<i2<< " is converted to to a double: "<<d<<"\n";
}
