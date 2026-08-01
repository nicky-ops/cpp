#include <iostream>
#include <vector>

double convert_to_number(const std::string& input)
{
    std::vector<std::string> string_equivalents = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (std::isdigit(input[0])){
        return std::stod(input);
    }

    for (int i = 0; i < string_equivalents.size(); i++){
        if (input == string_equivalents[i])
        {
            return i;
        }
    }
    std::cout << "Warning: '" << input << "' is not a valid single-digit number.\n";
    return 0;

}
int main()
{
    std::string string_x = "";
    std::string string_y = "";
    char choice = ' ';


    std::cout<<"This is a simple calculator that handles addition, Multiplication, division and subtraction\n";
    std::cout<<"Enter two single digit values (digits or spelled out) followed by the symbol for the operation to be carried out. '+'- for addition, '-'- for subtraction, '*' - for multiplication and '/' for division\n";
    std::cin>>string_x>>string_y>>choice;

    double x = convert_to_number(string_x);
    double y = convert_to_number(string_y);

    switch(choice){
        case '+':
            std::cout<<"The sum of "<<x<<" and "<<y<<" is: "<<x + y<<"\n";
            break;
        case '-':
            std::cout<<"The difference between "<<x<<" and "<<y<<" is: "<<x - y<<"\n";
            break;
        case '*':
            std::cout<<"The product of "<<x<<" and "<<y<<" is "<<x * y<<"\n";
            break;
        case '/':
            if (y == 0){
                std::cout<<"Error: Division by zero is undefined.\n";
            } else {
                std::cout<<"The division of "<<x<<" by "<<y<<" gives "<<x /y<<"\n";
            }
            break;
        default:
            std::cout<<"Unsupported symbol\n";
    }
}
