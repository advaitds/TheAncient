// Implementation of the functions needed for gcd calculation

// #include <iostream>
#include "gcd.h"

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
	int c, d = 0;
	
	if(a == b)
		return a;
	
	if(a == 0)
		return b;
	
	if(b == 0)
		return a;
	
	if(a%2 == 0 && b%2 == 0)
	{
		// divide both by 2 and recurse
		a /= 2;
		b /= 2;
		//std::cout << "(" << a << "," << b << ")\n";
		return 2*gcd_binary(a, b);
	}
	else
	{
		// at least one of them is odd
		if(a%2 == 0 && b%2 != 0)
		{
			a /= 2;
			//std::cout << "(" << a << "," << b << ")\n";
			return gcd_binary(a, b);
		}
		if(a%2 !=0 && b%2 == 0)
		{
			b /= 2;
			//std::cout << "(" << a << "," << b << ")\n";
			return gcd_binary(a, b);
		}
		if(a%2 !=0 && b%2 != 0)
		{
			if(a > b)
			{
				c = (a - b)/2;
				//std::cout << "(" << a << "," << b << ")\n";
				return gcd_binary(c, b);
			}
			else
			{
				c = (b - a)/2;
				//std::cout << "(" << a << "," << b << ")\n";
				return gcd_binary(c, a);
			}
		}
	}
}


int gcd_euclid(int a, int b)
{
	int r, rm;
	int n1, n2;
	
	n1 = min(a, b);
	n2 = max(a, b);
	
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