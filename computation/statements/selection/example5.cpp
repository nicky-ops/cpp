// This program implements currency conversion to US dollars from either; yen, kroner, pounds or swiss francs
#include <iostream>


// This function utilizes switch statement to perform the conversion.
int main()
{
    constexpr double yen_multiplier = 0.0062;
    constexpr double kroner_multiplier = 0.105;
    constexpr double pounds_multiplier = 1.32;
    constexpr double swiss_multiplier = 1.24;


    char unit = 'y';
    double value = 0;

    std::cout<<"Enter the currency value followed by the symbol: ";
    std::cin>>value>>unit;

    switch (unit){
        case 'y':
            std::cout<<"You have $"<<value * yen_multiplier<<"\n";
            break;
        case 'k':
            std::cout<<"You have $"<<value * kroner_multiplier<<"\n";
            break;
        case 'p':
            std::cout<<"You have $"<<value * pounds_multiplier<<"\n";
            break;
        case 's':
            std::cout<<"You have $"<<value * swiss_multiplier<<"\n";
            break;
        default:
            std::cout<<"Sorry currency not supported at the moment.";
    }

}
