#include <iostream>


int main()
{
    int pennies =  0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int one_dollar_coins = 0;
    int total_value = 0;
    int total_value_dollars = 0;
    int total_value_cents = 0;
    
    std::cout<<"How many pennies do you have? ";
    std::cin>>pennies;

    std::cout<<"How many nickels do you have? ";
    std::cin>>nickels;

    std::cout<<"How many dimes do you have? ";
    std::cin>>dimes;

    std::cout<<"How many quarters do you have? ";
    std::cin>>quarters;

    std::cout<<"How many half dollars do you have? ";
    std::cin>>half_dollars;

    std::cout<<"How many one-dollar coins do you have? ";
    std::cin>>one_dollar_coins;

    if (pennies == 1){
        std::cout<<"You have "<<pennies<<" penny.\n";
    } else
    {
        std::cout<<"You have "<<pennies<<" pennies.\n";
    }

    if (nickels == 1){
        std::cout<<"You have "<<nickels<<" nickel.\n";
    } else {
        std::cout<<"You have "<<nickels<<" nickels.\n";
    }
    
    if (dimes == 1){
        std::cout<<"You have "<<dimes<<" dime.\n";
    } else {
        std::cout<<"You have "<<dimes<<" dimes.\n";
    }
    
    if (quarters == 1){
        std::cout<<"You have "<<quarters<<" quarter.\n";
    } else {
        std::cout<<"You have "<<quarters<<" quarters.\n";
    }

    if (half_dollars == 1) {
        std::cout<<"You have "<<half_dollars<<" half dollar.\n";
    } else {
        std::cout<<"You have "<<half_dollars<<" half dollars.\n";
    }

    if (one_dollar_coins == 1)
    {
        std::cout<<"You have "<<one_dollar_coins<<" one-dollar coin.\n";
    } else {
        std::cout<<"You have "<<one_dollar_coins<<" one-dollar coins.\n";
    }

    total_value = pennies + nickels*5 + dimes*10 + quarters*25 + half_dollars*50 + one_dollar_coins*100;
    total_value_dollars = total_value / 100;
    total_value_cents = total_value % 100;
    std::cout<<"The value of all your coins is "<<total_value_dollars<<" dollars and "<<total_value_cents<<" cents.\n";
}
