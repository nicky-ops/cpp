#include <iostream>

int main()
{
    std::cout<<"Enter the name of the person you want to write to then press enter: ";
    std::string first_name = "";
    std::cin>>first_name;
    std::cout<<"Enter the name of another friend: ";
    std::string friend_name = "";
    std::cin>>friend_name;
    std::cout<<"Enter the age of the recepient: ";
    int age = 0;
    std::cin>>age;
    std::cout<<"Dear "<<first_name<<",\n"
             <<"    How are you?\n"
             <<"I am fine.\n"
             <<"I miss you \n"
             <<"Have you seen "<<friend_name<<" lately?\n";
    if (age == 0 or age >= 110)
    {
            std::cout<<"You're kidding!\n";
    }
    else if (age < 12)
    {
        std::cout<<"Next year you will be "<<age + 1<<".\n";
    }
    else if (age == 17)
    {
        std::cout<<"Next year you will be able to vote.\n";
    }
    else if (age > 70)
    {
        std::cout<<"Are you retired?\n";
    }
    else
    {
        std::cout<<"I hear you just had a birthday and you are "<<age<<" years old\n";
    }
    std::cout<<"Yours sincerely, \n________\n________\nAlison Ben\n";
}
