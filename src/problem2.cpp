#include <iostream>



#include "Chef.h"
#include "ItalianChef.h"
#include "mathFunctions.h"

int next_fib_number(int last, int beforeLast)
{
    return last + beforeLast;
}

int problem2()
{
    int evenFibSum = 2;

    int beforeLast = 1;
    int last = 2;
    
    int nextFibNumber = 0;
    
    while (last < 4000000)
    {
        nextFibNumber = next_fib_number(last, beforeLast);
        if (nextFibNumber % 2 == 0)
        {
            evenFibSum += nextFibNumber;
            std::cout << "addition triggered. Current sum: " << evenFibSum << std::endl;
        }
        beforeLast = last;
        last = nextFibNumber;
    }
    return evenFibSum;
}
