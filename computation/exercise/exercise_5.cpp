#include <iostream>



int main()
{
    int low = 1;
    int high = 100;
    int question_count = 0;
    std::string choice = "";

    std::cout<<"Think of a number between 1 and 100.\n";
    std::cout<<"I will guess it in 7 questions or less. Please answer Yes or No \n\n";


    while (low < high)
    {
        question_count ++;

        int mid = low + (high - low + 1) /2;

        std::cout<<"Question "<<question_count<<": Is the number less than "<<mid<<"?\n";
        std::cin>>choice;

        if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y"){
            high = mid - 1;
        } else {
            low = mid;
        }
    }

    std::cout<<"Found it! After "<< question_count<<" questions, your number must be "<<low<<".\n";
}
