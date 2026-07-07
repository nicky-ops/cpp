// This program illustrates that you can switch only on integers, char or enum types. It throws the error: the value must be of integer, char, or enum type
#include <iostream>


int main()
{
    std::cout<<"Do you like fish?\n";
    std::string s;
    std::cin>>s;

    switch(s) {
        case "no":
            break;
        case "yes":
            break;
    }
}
