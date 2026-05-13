// This program fetches user's name as input  and prints out the name
#include <iostream>


// This function prompts the user to enter their name then prints out their name
int main()
{
	std::cout<<"Enter your first name: \n";
	std::string first_name;
	std::cin>>first_name;
	std::cout<<"Greetings "<<first_name<<"!\n";
	return 0;
}
