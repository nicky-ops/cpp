#include <iostream>

int main()
{
    std::string word = "";
    std::cout<<"Enter a string: \n";
    std::cin>>word;
    for (char x: word)
        std::cout<<"The character "<<x<<": "<<"corresponding integer value is: "<<int(x)<<'\n';
}
