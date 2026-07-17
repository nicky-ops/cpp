#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<double> temps;

    for (double temp; std::cin>>temp;)
        temps.push_back(temp);

    // calculating the sum and mean
    double sum = 0;
    for (double x: temps)
        sum += x;

    if (temps.empty())
    {
        std::cout<<"No temperature values entered, cannot calculate median, sum or mean temperatures.\n";
    } else if(temps.size() % 2 != 0)
    {
        std::cout<<"The sum of all temperatures is: "<<sum<<'\n';
        std::cout<<"The mean temperature is: "<<sum/temps.size()<<'\n';
        std::cout<<"Median temperature is: "<<temps[temps.size()/2]<<'\n';
    } else {
        std::cout<<"The sum of all temperatures is: "<<sum<<'\n';
        std::cout<<"The mean temperature is: "<<sum/temps.size()<<'\n';
        std::cout<<"Median temperature is: "<<((temps[(temps.size()/2) - 1]) + (temps[temps.size()/2])) / 2<<"\n";
    }
}
