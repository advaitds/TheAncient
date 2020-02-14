/*
 * 
 * Program to calculate the greatest common divisor of 
 * two given numbers using two methods - 
 * 1) Euclidean method of long division
 * 2) Binary algorithm, which uses mainly divsion and subtraction by 2
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
	
	// The two integers
	std::cout << "Enter two integers" << '\n';
	std::cin >> a >> b;
	
	// 1. Euclidean method
	std::cout << "Euclidean method: " << '\n';
	g = gcd_euclid(a, b);
	
	// put the result out
	std::cout << "GCD(" << a << " , " << b << ") = " << g << '\n';
	
	
	return 0;
}
