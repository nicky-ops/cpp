#include <iostream>


int main()
{
	std::cout<<"Please enter your first and second name\n";
	std::string first;
	std::string second;
	std::cin>>first>>second;

	std::string name = first + " " + second;
	std::cout <<"Hello, "<< name <<'\n';

	if (first == second)
		std::cout<<"that's the same name twice\n";
	if (first < second)
		std::cout<<first<<" is alphabetically before "<<second<<'\n';
	if (first > second)
		std::cout<<first<<" is alphabetically after "<<second<<'\n';
}
