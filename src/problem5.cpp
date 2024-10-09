
#include <iostream>

#include "mathFunctions.h"



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
    for (int i = start; i <= stop ; i++)
    {
        if (isPrime(i)) smallest_multiple *= i;
        else if (alreadyContained(i) == false) smallest_multiple *= i;
        else continue;
    }
    std::cout << "smallest multiple is: " << smallest_multiple << std::endl;
    return 0;
}

//2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20