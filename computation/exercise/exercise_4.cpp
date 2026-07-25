#include <iostream>
#include <vector>


int main()
{
    std::vector<double> distance;
    double sum = 0.0;
    for(double x; std::cin>>x;)
    {
        distance.push_back(x);
    }

    if (distance.empty())
    {
        std::cout<<"You need to enter at least one value\n";
    } else {
        double shortest_distance = distance[0];
        double longest_distance = distance[0];
        for(double x: distance) {
            sum += x;
            if (x < shortest_distance) {
                shortest_distance = x;
            }
            if (x > longest_distance) {
                longest_distance = x;
            }
        }
        std::cout<<"The total distance is: "<<sum<<"\n";
        std::cout<<"The shortest distance is: "<<shortest_distance<<"\n";
        std::cout<<"The longest distance is: "<<longest_distance<<"\n";
        std::cout<<"The mean distance between two neighbouring cities is: "<<sum / distance.size()<<"\n";
    }
}
