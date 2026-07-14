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
    std::cout<<"The sum of all temperatures is: "<<sum<<'\n';
    std::cout<<"The mean temperature is: "<<sum/temps.size()<<'\n';

    //calculating median
    std::ranges::sort(temps);
    std::cout<<"Median temperature is: "<<temps[temps.size()/2]<<'\n';
}
