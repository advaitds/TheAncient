#ifndef GCD_H
#define GCD_H

#include <iostream>

int max(int a, int b)
{
	int m = (a > b) ? a : b;
	return m;
	
}

int min(int a, int b)
{
	int m = (a < b) ? a : b;
	return m;
}


int gcd_binary(int a, int b)
{
	int g, gcd, d = 0;
	std::cout << "ok.. at least we're here" << '\n';
	std::cout << a << '\t' << b << '\n';
	while(a%2 == 0 && b%2 == 0)
	{
		std::cout << "test" << '\n';
		a = a/2;
		b = b/2;
		d++;
	}
	while(a != b)
	{
		std::cout << a << '\t' << b << '\n';		
		if(a > b)
			a = (a-b)/2;
		else if(b > a)
			b = (b-a)/2;
		
	};
	
	g = a;
	gcd = g * 2^d;	
	
	return gcd;
}


int gcd_euclid(int a, int b)
{
	int r, rm;
	int n1, n2;
	
	n1 = min(a, b);
	n2 = max(a, b);
	std::cout << n1 << '\t' << n2 << '\n';
	
	// now we know n2 > n1
	rm = n2%n1;
	while(rm != 0)
	{
		n2 = n1;
		n1 = rm;
		rm = n2%n1;
	};
	
	
	return n1;
	
}

#endif
