#include <iostream>
#include <cmath>

int main()
{
    int num;
    bool isprime = 1;

    std::cout << "Enter a number: " << '\n';
    std::cin >> num;

    std::cout << "Primes lower than " << num << " are: " << '\n';
    
    // print all the primes numbers below this number
    
    for(int p=2; p<=num; p++)
    {
		isprime = 1;
		for(int d=2; d <=sqrt(double(p)); d++)
		{
			if(p % d == 0)
				isprime = 0;
		}
		if(isprime == 1)
			std::cout << p << '\t';
	}

	std::cout << '\n';
    return 0;

}
