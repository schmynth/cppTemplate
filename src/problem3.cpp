#include <iostream>

#include "mathFunctions.h"

using namespace std;

// Largest prime factor

int largestPrimeFactor(long int number_under_test)
{
    int current_biggest_prime_factor = 1;
    for (int i = 2; i < number_under_test / 3; i++)
    {
        if (isPrime(i) == true && number_under_test % i == 0)
        {
            cout << "current biggest prime factor: " << current_biggest_prime_factor << endl;
            cout << "current rest: " << number_under_test << endl;
            current_biggest_prime_factor = i;
            number_under_test = number_under_test / i;
        }

    }
    current_biggest_prime_factor = number_under_test; // was übrig bleibt, ist der größte Primfaktor.
    return current_biggest_prime_factor;
}

void printLargestPrime()
{
    cout << largestPrimeFactor(600851475143) << endl;
}