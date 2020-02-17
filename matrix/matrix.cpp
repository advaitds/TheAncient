#include <iostream>
#include <cctype>
#include "matrix.h"

int ReadMatrix(float a[R][C], int nRows, int nColumns)
{
    float t;
    for(int ii =0; ii <nRows; ii++)
    {
        for(int jj=0; jj<nColumns; jj++)
        {
            std::cin >> t;
            a[ii][jj] = t;
            std::cout << t << '\n';
            if(isalpha(t))
            {
                std::cout << "pff";
                return 0;
            }
        }
    }
    return 1;
}

void PrintMatrix(float a[R][C], int nRows, int nColumns)
{
    for(int ii=0; ii<nRows; ii++)
    {
        for(int jj=0; jj<nColumns; jj++)
        {
            std::cout << a[ii][jj];
            if(jj != C-1)
                std::cout << '\t';
         }
         std::cout << '\n';
     }
 }    
