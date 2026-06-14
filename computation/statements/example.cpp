// This program converts currency from either yen('k'), kroner('k'), and pounds('p'), into dollars
#include <iostream>


int main()
{
    constexpr double yen_multiplier = 0.0062;
    constexpr double kroner_multiplier = 0.105;
    constexpr double pounds_multiplier = 1.32;

    double currency_value = 0;
    std::string currency_symbol = "";

    std::cout<<"Enter the amount to convert followed by the currency(y - yen, k - kroner and p for pounds): ";
    std::cin>>currency_value>>currency_symbol;
    
    if (currency_symbol == "y" or currency_symbol == "Y")
        std::cout<<"The amount in dollars is: $"<<currency_value * yen_multiplier<<".\n";
    else if (currency_symbol == "K" or currency_symbol == "k")
        std::cout<<"The amount in dollars is: $"<<currency_value * kroner_multiplier<<".\n";
    else if (currency_symbol == "p" or currency_symbol == "P")
        std::cout<<"The amount in dollars is: $"<<currency_value * pounds_multiplier<<".\n";
    else
        std::cout<<"Sorry, I don't know a symbol called"<<currency_symbol<<"\n";
}
