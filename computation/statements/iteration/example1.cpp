// This program prints out a table of characters with their corresponding integer values
#include <iostream>


int main()
{
    int i = 0;
    char letter = 'a';
    while (i < 26) {
        std::cout<<char(letter + i)<<'\t'<< i + letter<<'\n';
        ++i;
    }
}
