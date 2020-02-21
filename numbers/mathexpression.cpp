/*
 * Evaluate a mathematical expression 
 * For example: 5 + 6 - 8/2
 * this should give 7 as the answer. 
*/

#include <iostream>


int main()
{
    char ops[] = {'(', ')', '[', ']', '^', '*', '/', '%', '+' , '-'};
    
    for(int ii =0; ii<=9; ii++)
        std::cout << ops[ii] << '\t';
    
    std::cout << '\n';
    return 0;
}
