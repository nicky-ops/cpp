#include <iostream>
#include <vector>


int main()
{
    std::vector<std::string> words = {"Broccoli", "Zucchini", "Cauliflower", "Red Pepper"};

    for(std::string i; std::cin>>i;)
    {
        bool found = false;
        for (const std::string& x : words) {
            if (i == x) {
                found = true;
                break;
            }
        }

        if (found) {
            std::cout <<"BLEEP\n";
        } else {
            std::cout<<i<<"\n";
        }
    }
}
