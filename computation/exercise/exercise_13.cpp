// This program finds prime numbers using Sieve of Eratosthenes method
#include <iostream>
#include <vector>


int main()
{
    int n = 0;
    std::cout<<"Enter the max number: ";
    std::cin>>n;

    // Creating a vector of size n+1, and set every item to 'true'
    std::vector<bool> is_prime(n+1, true);

    // Manually cross 0 and 1 since they are not prime
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        // cross out the multiples if the number hasn't been crossed out yet
        if (is_prime[i] == true){
            for (int j = i + i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
        
    }
    for (int i = 0; i <= n; i++)
    {
        if (is_prime[i] == true)
            std::cout<<i<<" ";
    }
    std::cout<<"\n";
}
