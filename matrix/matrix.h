// header file for the matrix manipulation functions 
#ifndef MATRIX_H
#define MATRIX_H

#define R 10
#define C 10

bool IsValidInput(std::string str);
int ReadMatrix(float a[R][C], int nRows, int nColumns);
void PrintMatrix(float a[R][C], int nRows, int nColumns);

void Add(float a[R][C], float b[R][C], float d[R][C], 
        int nRows, int nColumns, char op);

void Multiply(float a[R][C], float b[R][C], float d[R][C], 
        int nRows, int nColumns);

#endif
