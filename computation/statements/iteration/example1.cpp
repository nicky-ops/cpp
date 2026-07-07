// This program prints out a table of characters with their corresponding integer values
#include <iostream>

// Using while
// int main()
// {
//     int i = 0;
//     char letter = 'a';
//     while (i < 26) {
//         std::cout<<char(letter + i)<<'\t'<< i + letter<<'\n';
//         ++i;
//     }
// }

// Using for statement
int main()
{   
    // for lower-case letters
    char lower_case = 'a';
    char upper_case = 'A';
    for (int i=0; i < 26; ++i) {
        std::cout<<char(lower_case + i)<<'\t'<<i + lower_case<<'\n';
        std::cout<<char(upper_case + i)<<'\t'<<i + upper_case<<'\n';
    }
}
