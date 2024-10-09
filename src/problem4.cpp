#include <iostream>
#include "mathFunctions.h"


void printLSDandMSD(int);
std::string concatenateLAndR(std::string candidate);



/* void printLSDandMSD(int candidate)
{
    std::cout << "MSD: " << msd(candidate) << std::endl;
    std::cout << "LSD: " << lsd(candidate) << std::endl;
} */



void test()
{
    if (isPalindrome(201002) == false && isPalindrome(201102) == true)
    {
        std::cout << "läuft." << std::endl;
    }
    else std::cout << "läuft noch nicht. " << std::endl;
}

void sweepForPalindrome(int range)
{
    int palindrome_candidate = 0;
    int MAX_RANGE = 999;
    int x = MAX_RANGE;
    int y = MAX_RANGE;
    bool x_sweeped = false;
    bool y_sweeped = false;



    for (int j = 0; j < range; j++) // loop through y down from MAX_RANGE
    {
        x = 999;  // reset x for new y value

        for (int i = 0; i < range; i++) // loop though x down from MAX_RANGE
        {
            //std::cout << "x: " << x << " y: " << y << std::endl;
            palindrome_candidate = x * y;
            if (isPalindrome(palindrome_candidate)) 
            {
                std::cout << "largest palindrome is: " << x*y << " x: " << x << "y: " << y << std::endl;
                break;
            }
            else
            {
                std::cout << x*y << " is not palindrome." << std::endl;
                x -= 1;
            }
            
        }
        if (isPalindrome(palindrome_candidate))
        {
            break;
        }
        else 
        {
        y -= 1;
        }
    }
}

int main2()
{
    sweepForPalindrome(400);

    /* std::cout << "msd of 18 is: " << msd("18") << " lsd of 18 is: " << lsd("18") << std::endl;
    std::cout << "concat of 20102 is: " << concatenateLAndR("20102") << std::endl;
    std::cout << "concat of 201022 is: " << concatenateLAndR("201022") << std::endl;
    std::cout << "concat of 010 is: " << concatenateLAndR("010") << std::endl; */
    return 0;
}

