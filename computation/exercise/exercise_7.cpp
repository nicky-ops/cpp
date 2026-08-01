#include <iostream>
#include <vector>


int main()
{
    std::vector<std::string> string_equivalents = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string input = "";

    std::cout<<"Enter a digit (0-9) or a spelled-out number (zero-nine).\n";
    std::cout<<"Press Ctrl+C to exit\n\n";


    while(std::cin>>input)
    {
        if (std::isdigit(input[0]))
        {
            int digit = std::stoi(input);

            if (digit >= 0 && digit < string_equivalents.size()){
                std::cout<<string_equivalents[digit]<<"\n";
            } else {
                std::cout<<"Number out of range!\n";
            }
        } else {
            bool found = false;

            for (int i = 0; i < string_equivalents.size(); i++){
                if (input == string_equivalents[i]){
                    std::cout<<i<<"\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
            std::cout<<"Not a valid number word!\n";
        }
        }
    }

}
