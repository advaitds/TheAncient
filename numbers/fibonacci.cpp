/*
 * Generate Fibonacci sequence upto a given maximum value
*/

# include <iostream>

int main()
{
    int f1, f2, f3, max; 
    int nprinted = 0;
    
    f1 = f2 = 1;
    
    std::cout << "Enter a maximum value \n";
    std::cin >> max;
    
    std::cout << f1 << '\t';
    std::cout << f2 << '\t';
    nprinted += 2;
    while(true)
    {
        f3 = f1 + f2;
        std::cout << f3;
        nprinted++;
        
        if(nprinted % 8 == 0)
            std::cout << '\n';
        else
            std::cout << '\t';
       
        if(f3 >= max)
            break;
        else
            f1 = f2;
            f2 = f3;
    }
    
    std::cout << '\n';
    
    return 0;
}
