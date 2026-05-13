// This program requests for user information name and age(seperated by a whitespace) and then prints it out to the screen.
#include <iostream>


// This function prompts the user to input their name and age, stores them in the variables name and age respectively, then prints out the user's name and age to the screen.
int main()
{
	std::cout<<"Enter your name and age, seperated by space: \n";
	double age;
	std::string name;
	std::cin>>name>>age;
	std::cout<<"Hello, "<<name<<"(age "<<age * 12<<" months)\n";
}
