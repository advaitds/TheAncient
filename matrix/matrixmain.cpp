/*
 Code to do operations on two matrices 
 using two dimensional arrays, without dynamic memory allocation 
*/

#include <iostream>
#include "matrix.h"

int main()
{
    float a[R][C], b[R][C];
    int nRows, nColumns;
    int val;
    
    // Get the matrix sizes
    std::cout << "Enter the matrix size (rows, columns): ";
    std::cin >> nRows >> nColumns;
    if(nRows > R || nColumns > C)
    {
        std::cout << "Matrices too big to handle\n";
        return 0;
    }
    
	
    // Get the matrices
    std::cout << "Enter the first matrix: \n";
    val = ReadMatrix(a, nRows, nColumns);
    std::cout << "Val = " << val << '\n';
    if(val == 0)
    {
        std::cout << "Invalid values entered\n Terminating";
        return 0;
    }
    
    std::cout << "You entered: \n";
    PrintMatrix(a, nRows, nColumns);
    
    std::cout << "Enter the second matrix: \n";
    if(ReadMatrix(a, nRows, nColumns) == 0)
        return 0;
        
    // Addition
    
    // Subtraction 
    
    // Multiplication 
    
    // Transpose
    
	
    return 0;
}
