// case label values must be distinct and constants
#include <iostream>


int main()
{
    int y = 'y';
    constexpr char n = 'n';

    std::cout<<"Do you like fish?";
    char a = 0;
    std::cin>>a;

    switch (a){
        case n:
            break;
        case y:         // error: variable in case label
            break;
        case 'n':       // error: duplicate case label(n's value is 'n')
            break;
        default:
            break;
    }
}
