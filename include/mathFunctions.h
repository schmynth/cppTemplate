#include <iostream>
#include <map>

#ifndef MATH_H
#define MATH_H

int faculty(int);

bool isPrime(int);

bool isDivisorOf(int, int);

int most_significant_digit(std::string);

int least_significant_digit(std::string);

std::string cutLAndR(std::string);

bool isPalindrome(int);

std::map<int,int> prime_factorization(int);

#endif