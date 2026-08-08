#include <iostream>
#include <vector>



int main()
{
    unsigned n = 0;
    std::cout<<"Enter the number: \n";
    std::cin>>n;
    std::vector<int> primes = {2};
    int current_number = 3;

    while (primes.size() < n)
    {
        bool is_prime = true;

        for (int p: primes)
        {
            if (current_number % p == 0)
            {
                is_prime = false;
                break;
            }

        }
        if (is_prime == true) primes.push_back(current_number);

        current_number++;
        
    }
    for (int number: primes)
    {
        std::cout<<number<<" ";
    }
    std::cout<<"\n";
}
