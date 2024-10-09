#include <iostream>
#include "mathFunctions.h"

int faculty(int n)
{
    if (n == 1) { return 1; }
    else return n * faculty(n - 1); 
}

bool isPrime(int primeCandidate)
{
    for (int i = 2; i < primeCandidate; i++)
    {
        if (primeCandidate % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isDivisorOf(int dividend, int divisor)
{
    if (dividend % divisor == 0) return true;
    else return false;
}

int msd(std::string s_candidate)
{
    std::string::iterator first = s_candidate.begin();
    int msd = *first - '0';
    return msd;
}

int lsd(std::string s_candidate)
{
    std::string::iterator last = s_candidate.end() - 1;
    int lsd = *last - '0';
    return lsd;
}

std::string cutLAndR(std::string s_candidate)
{
    if (s_candidate.length()>2)
    {
        s_candidate.erase(0,1);
        s_candidate.pop_back();
    }
    else
    {
        std::cout << "Can not concatenate, because str is too short (len !> 2)" << std::endl;
    }
    return s_candidate;
}

bool isPalindrome(int palindrome_candidate)
{
    int candidate_copy = palindrome_candidate;
    std::string candidate = std::to_string(palindrome_candidate);
    while (candidate.length()>2)
    {
        if (lsd(candidate) != msd(candidate))
        {
            //std::cout << candidate_copy << " is not palindrome." << std::endl;
            return false;
        }
        else
        {
            candidate = cutLAndR(candidate);
            
        }
        
    }
    if (candidate.length() == 2 && msd(candidate) == lsd(candidate))
        {
            std::cout << candidate_copy << " is palindrome." << std::endl;
            return true;
        }
    else if (candidate.length() == 1)
    {
        std::cout << candidate_copy << " is palindrome." << std::endl;
        return true;
    }
    else
    {
        //std::cout << candidate_copy << " is not palindrome." << std::endl;
        return false;
    }
}