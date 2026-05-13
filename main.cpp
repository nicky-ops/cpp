#include <iostream>

int main() {
	char name, age;

	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Enter your age: ";
	std::cin >> age;
	age += 5;
	std::cout << "Hello" << name << "in 5 years will be" << age <<  ".\n";
	return 0;
}
