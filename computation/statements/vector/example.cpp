#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {5, 6, 8, 9, 90};
    std::vector<std::string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"};
    philosopher[2] = 99; // error: trying to assign an int to a string but 99 will be converted to be the character c
    // v[2] = "Hume";  // error: trying to assign a string to an int


    // defining a vector of a given size without specifying the element values
    std::vector<int> vi(5);
    std::vector<std::string> vs(4);
    std::cout<<"For integers "<<vs[2]<<" and for strings "<<philosopher[2]<<'\n';

    // Traversing a vector
    for (int i = 0; i<v.size(); ++i)
        std::cout<<v[i]<<'\n';

    // simplified traversal
    for (int x : v)
        std::cout<<x<<'\n';

    // growing a vector
    std::vector<double> u;
    std::cout<<"Vector when empty "<<u.size()<<'\n';
    u.push_back(300.22);
    u.push_back(4.55);
    std::cout<<"Vector when elements have been added "<<u.size()<<'\n';

}
