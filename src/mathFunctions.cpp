#include <iostream>
#include <map>
#include "mathFunctions.h"

int faculty(int n)
{
    if (n == 1) { return 1; }
    else return n * faculty(n - 1); 
}

/**
 * @brief Returns true if parameter primeCandidate is a prime number.
 * 
 * @param primeCandidate 
 * @return true 
 * @return false 
 */
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

int most_significant_digit(std::string s_candidate)
{
    std::string::iterator first = s_candidate.begin();
    int msd = *first - '0';
    return msd;
}


int least_significant_digit(std::string s_candidate)
{
    std::string::iterator last = s_candidate.end() - 1;
    int lsd = *last - '0';
    return lsd;
}

/**
 * @brief Cuts leftmost and rightmost character of a string and returns the rest.
 * 
 * @param s_candidate 
 * @return std::string 
 */
std::string cutLAndR(std::string s_candidate)
{
    if (s_candidate.length()>2)
    {
        s_candidate.erase(0,1);
        s_candidate.pop_back();
    }
    else
    {
        std::cout << "Can not cut, because str is too short (len !> 2)" << std::endl;
    }
    return s_candidate;
}

/**
 * @brief 
 * 
 * @param int palindrome_candidate 
 * @return true if palindrome_candidate is a palindrome, else 
 * @return false
 */
bool isPalindrome(int palindrome_candidate)
{
    
    int candidate_copy = palindrome_candidate;
    std::string candidate = std::to_string(palindrome_candidate);
    while (candidate.length()>2)
    {
        if (least_significant_digit(candidate) != most_significant_digit(candidate))
        {
            //std::cout << candidate_copy << " is not palindrome." << std::endl;
            return false;
        }
        else
        {
            candidate = cutLAndR(candidate);
            
        }
        
    }
    if (candidate.length() == 2 && most_significant_digit(candidate) == least_significant_digit(candidate))
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

/**
 * @brief Gives back a map with prime factorization of param operand
 * in the form of {prime number, occurences}.
 * 
 * @param operand 
 * @return std::map<int,int> 
 */
std::map<int,int> prime_factorization(int operand)
{
    std::map<int, int> prime_map;
    if (isPrime(operand))
    {
        prime_map.insert(std::pair<int, int>(operand, 1));
        return prime_map;
    }
    else
    {
        for (int i = 2; i < operand; i++)
        {
            if (isPrime(i))
            {
                prime_map.insert(std::pair<int, int>(i, 0));
                while (operand % i == 0)
                {
                    operand /= i;
                    prime_map.at(i) ++;
                }
            }
            
        }
    }
        

    return prime_map;
}