#include <iostream>
#include <vector>

// function to dynamically check if a number is prime
bool is_prime(int n, const std::vector<int>& found_primes)
{
    if (n < 2){
        return false;
    }
    for (int p: found_primes)
    {
        if (n % p == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<int> primes;
    std::cout<<"Starting the program\n";
    for (int i = 1; i < 100; i++){
        if (is_prime(i, primes))
        {
            primes.push_back(i);
        }
    }
    for (int i : primes){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}
