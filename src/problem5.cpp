
#include <iostream>

#include "mathFunctions.h"
#include "utilityFunctions.h"



bool alreadyContained(int testant)
{
    for (int i = 2; i < testant; i++ )
    {
        if (testant % i == 0) return true;
        else continue;
    }
    return false;
}

int main()
{

    int start = 2;
    int stop = 10;
    unsigned long int smallest_multiple = 1;

    int stop_fac = faculty(stop);
    smallest_multiple = stop_fac;
    

    
    
    for (int i = 1; i < 20; i++)
    {
        auto prime_factors = prime_factorization(i);
        std::cout << "Primefactors for " << i << " are: " << std::endl;
        print_map(prime_factors);
    }
    
    std::cout << "smallest multiple is: " << smallest_multiple << std::endl;
    
    return 0;
    
}

//2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20