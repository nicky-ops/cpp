#include <iostream>
#include <vector>


int main()
{
    std::vector<std::string> choices = {"Rock", "Scissors","Scissors","Paper","Rock","Scissors","Rock","Paper","Scissors","Rock", "Paper","Rock", "Scissors","Paper", "Rock","Scissors", "Paper", "Scissors", "Rock", "Rock", "Paper", "Scissors", "Rock", "Paper"
    "Scissors", "Paper", "Paper", "Rock", "Rock", "Scissors", "Rock", "Paper", "Scissors", "Paper", "Rock", "Scissors", "Paper", "Paper", "Rock", "Scissors", "Scissors", "Rock", "Paper", "Rock", "Scissors", "Rock", "Paper", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Rock",
    "Scissors", "Paper", "Scissors", "Rock", "Paper", "Rock", "Scissors", "Paper", "Rock", "Scissors",
    "Paper", "Rock", "Scissors", "Paper", "Rock", "Rock", "Scissors", "Paper", "Rock", "Scissors",
    "Paper", "Rock", "Scissors", "Paper", "Scissors", "Rock", "Paper", "Rock", "Scissors", "Paper",
    "Rock", "Scissors", "Paper", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Rock", "Scissors", "Paper", "Rock", "Scissors", "Paper",
    "Rock", "Scissors", "Paper", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper",
    "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors",
    "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock",
    "Scissors", "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors",
    "Paper", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper", "Scissors",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock",
    "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper", "Rock", "Paper",
    "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Scissors", "Paper",
    "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors", "Rock"};

    char user_choice = ' ';
    int counter = 0;

    std::cout<<"Welcome to the game!\n Enter 'R' to select Rock, 'P' to select Paper and 'S' to select Scissors\n";

    while (std::cin>>user_choice)
    {
        switch (user_choice)
        {
            case 'R':
                if (choices[counter] == "Paper"){
                    std::cout<<"My choice is "<<choices[counter]<<"You have lost!\n";
                } else if (choices[counter] == "Scissors"){
                    std::cout<<"My choice is "<<choices[counter]<<". You have won!\n";
                } else {
                    std::cout<<"My choice is "<<choices[counter]<<". We have drawn!\n";
                }
                break;
            case 'P':
                if (choices[counter] == "Scissors"){
                    std::cout<<"My choice is "<<choices[counter]<<"You have lost!\n";
                } else if (choices[counter] == "Rock"){
                    std::cout<<"My choice is "<<choices[counter]<<". You have won!\n";
                } else {
                    std::cout<<"My choice is "<<choices[counter]<<"We have drawn\n";
                }
                break;
            case 'S':
                if (choices[counter] == "Paper"){
                    std::cout<<"My choice is "<<choices[counter]<<"You have Won!\n";
                } else if (choices[counter] == "Rock"){
                    std::cout<<"My choice is "<<choices[counter]<<". You have lost!\n";
                } else {
                    std::cout<<"My choice is "<<choices[counter]<<". We have drawn!\n";
                }
                break;
            
            default:
                std::cout<<"Invalid choice! Try again!\n";
                break;
        }
        counter = (counter + 1) % choices.size();
    }   
}
