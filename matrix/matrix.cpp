#include <iostream>
#include <cctype>
#include "matrix.h"

bool IsValidInput(std::string str)
{
    int t; 
    for(int kk =0; kk<str.length(); kk++)
    {
        t = str[kk];
        if(isalpha(t) || iscntrl(t) || ispunct(t))
            return 0;
    }
    return 1;
}


int ReadMatrix(float a[R][C], int nRows, int nColumns)
{
    std::string inp;
    /* input is taken in the form or a string
     * because if a simple 'float inp;' is used, 
     * the extraction from cin automatically casts
     * the input value to float, removing the invalid characters. 
     * This makes the isalpha() and such functions fail to detect 
     * invalid inputs. 
    */
    for(int ii =0; ii <nRows; ii++)
    {
        for(int jj=0; jj<nColumns; jj++)
        {
            std::cin >> inp;
            if(IsValidInput(inp))
            {
                // convert to float and assign the value
                a[ii][jj] = std::stof(inp);
            }
            else
                return 0;
        }
    }
    return 1;
}

void PrintMatrix(float p[R][C], int nRows, int nColumns)
{
    for(int ii=0; ii<nRows; ii++)
    {
        for(int jj=0; jj<nColumns; jj++)
        {
            std::cout << p[ii][jj];
            if(jj != C-1)
                std::cout << '\t';
         }
         std::cout << '\n';
     }
 }    

void Add(float a[R][C], float b[R][C], float d[R][C], 
        int nRows, int nColumns, char op = '+')
{
    for(int ii=0; ii<nRows; ii++)
    {
        for(int jj=0; jj<nColumns; jj++)
        {
            if(op == '-')
                d[ii][jj] = a[ii][jj] - b[ii][jj];
            else
                d[ii][jj] = a[ii][jj] + b[ii][jj];
        }
    }
}

void Multiply(float a[R][C], float b[R][C], float d[R][C], 
        int nRows, int nColumns)
{    
    for(int ii=0; ii<nRows; ii++)
    {
        for(int jj=0;jj<nColumns;jj++)
        {
            int prd = 0;
            for(int kk=0; kk<nColumns; kk++)
                prd += a[ii][kk] * b[kk][jj];
            d[ii][jj] = prd;
        }
    }
}