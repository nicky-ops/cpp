#include <iostream>


int main()
{
    char unit = 'c';
    double length = 0;
    double cm_per_inch = 2.54;
    std::cin>>unit>>length;
    switch (unit) {
        case 'i':
            std::cout<<length<<"in =="<<length*cm_per_inch<<"cm/n";
            break;

        case 'c':
            std::cout<<length<<"cm =="<<length/cm_per_inch<<"in/n";
            break;
        default:
            std::cout<<"Sorry, I don't know a unit called"<<unit<<"\n";
            break;
    }
}
