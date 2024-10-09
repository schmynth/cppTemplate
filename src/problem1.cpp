#include <iostream>



#include "Chef.h"
#include "ItalianChef.h"

using namespace std;


bool isMultiple(int candidate)
{
    if (candidate % 3 == 0 || candidate % 5 == 0)
    {
        return true;
    }
    else return false;
}

int sumOfTruths(int limit)
{
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        if (isMultiple(i)==true)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int problem1()
{
    return sumOfTruths(1000);
}
