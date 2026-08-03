#include <iostream>
#include <cmath>


int main()
{
    unsigned long long total_grains = 0;
    int counter = 0;
    bool passed_1k = false;
    bool passed_1m = false;
    bool passed_1b = false;

    while (counter < 64)
    {
        unsigned long long current_square = 0;

        current_square = std::pow(2,counter);
        total_grains += current_square;

        if (total_grains >= 1000 && passed_1k == false)
        {
            std::cout<<"The number of squares required to give the inventor at least 1000 grains of rice is: "<<counter + 1<<"\n";
            passed_1k = true;
        }
        if (total_grains >= 1000000 && passed_1m == false){
            std::cout<<"The number of squares required to give the inventor at least 1000000 grains of rice is: "<<counter + 1<<"\n";
            passed_1m = true;
        }
        if (total_grains >= 1000000000 && passed_1b == false){
            std::cout<<"The number of squares required to give the inventor at least 1000000000 grains of rice is: "<<counter + 1<<'\n';
            passed_1b = true;
        }
        counter ++;

    }

}
