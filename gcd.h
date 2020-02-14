#ifndef GCD_H
#define GCD_H


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


int gcd_binary(int a, int b);


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
