// This program converts distance from miles to kilometers
#include <iostream>


// This function takes user input in miles then prints out the distance in kilometers. Multiplies each mile by 1.609
int main()
{
    double distance_in_miles = 0.00;
    double multiplier = 1.609;
    std::cout<<"Enter distance in miles: ";
    std::cin>>distance_in_miles;
    std::cout<<"Distance in KM: "<<distance_in_miles * multiplier<<"\n";
}
