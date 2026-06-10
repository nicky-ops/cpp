#include <iostream>


int main()
{
    std::string num_0 = "zero";
    std::string num_1 = "one";
    std::string num_2 = "two";
    std::string num_3 = "three";
    std::string num_4 = "four";

    std::string s_input = "";
    std::cout<<"Enter a spelled out number: ";
    while(std::cin>>s_input)
    {
        if (s_input == num_0)
        {
            std::cout<<"The corresponding digit is: "<<0<<"\n";
        } else if (s_input == num_1)
        {
            std::cout<<"The corresponding digit is: "<<1<<"\n";
        } else if (s_input == num_2)
        {
            std::cout<<"The corresponding digit is: "<<2<<"\n";
        } else if (s_input == num_3)
        {
            std::cout<<"The corresponding digit is: "<<3<<"\n";
        } else if (s_input == num_4)
        {
            std::cout<<"The corresponding digit is: "<<4<<"\n";
        } else
        {
            std::cout<<"not a number I know.\n";
        }
    }
}
