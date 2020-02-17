/*
 Code to do operations on two matrices 
 using two dimensional arrays, without dynamic memory allocation 
*/

#include <iostream>
#include "matrix.h"

int main()
{
    float a[R][C], b[R][C];
    float d[R][C];
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
    if(val == 0)
    {
        std::cout << "Invalid values entered\nTerminating";
        return 0;
    }

    std::cout << "Enter the second matrix: \n";
    val = ReadMatrix(b, nRows, nColumns);
    if(val == 0)
    {
        std::cout << "Invalid values entered\nTerminating";
        return 0;
    }
        
    // Addition
    Add(a, b, d, nRows, nColumns, '+');
    std::cout << "Sum: \n";
    PrintMatrix(d, nRows, nColumns);
    
    // Subtraction 
    Add(a, b, d, nRows, nColumns, '-');
    std::cout << "Difference: \n";
    PrintMatrix(d, nRows, nColumns);
        
    // Multiplication
    Multiply(a, b, d, nRows, nColumns);
    std::cout << "Product \n";
    PrintMatrix(d, nRows, nColumns);
        
    return 0;
}
