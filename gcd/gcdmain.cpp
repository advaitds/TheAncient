/*
 * 
 * Program to calculate the greatest common divisor of 
 * two given numbers using two methods - 
 * 1) Euclidean method using long division.
 * 2) Binary algorithm, uses mainly divsion by 2 and subtraction. 
 * 
*/

#include <iostream>
#include <string>
#include "gcd.h"

int main()
{
    int a, b;
    int g = 0;

    std::string outstr{""};

    // Get the two integers
    std::cout << "Enter two integers" << '\n';
    std::cin >> a >> b;

    // 1. Euclidean method
    g = gcd_euclid(a, b);

    // put the result out
    std::cout << "\nEuclidean method: ";
    std::cout << "GCD(" << a << " , " << b << ") = " << g << '\n';

    // 2. Binary method
    g = gcd_binary(a, b);

    // put the result out
    std::cout << "\nBinary method: ";
    std::cout << "GCD(" << a << " , " << b << ") = " << g << '\n';

    return 0;
}
