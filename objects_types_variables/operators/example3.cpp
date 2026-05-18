#include <iostream>


int main()
{
    std::string current;
    std::string previous;
    int number_of_words = 0;
    std::cout<<"Please enter a word: \n";
    while (std::cin>>current)
    {
        ++number_of_words;
        if (previous == current)
            std::cout <<"word number "<< number_of_words<<"repeated:"<<current<<'\n';
        previous = current;
    }

}
