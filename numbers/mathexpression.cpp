/*
 * Evaluate a simple mathematical expression 
 * For example: 5 + 6 - 8/2
 * this should give 7 as the answer. 
 * No parenthesis are considered
*/

#include <iostream>
#define nOp 10 // maximum number of operators

float EvaluateExpression(std::string expr)
{
    // loop for paranthesis
    
    
    
    // First see if there are any parenthesis 
    do
    {
        int pIndices[2] = FindParanthesis(expr);
        int sum = pIndices[0] + pIndices[1];
        
        
        
    }while(sum != -2)
    
    
    
    if(pIndices[0] != -1 && pIndices[1] != -1)
    {
        // there are paranthesis in this expression
        // extract the expression within in the paranthesis
        // and recall this function 
        std::string subexpr = expr.substring(pIndices[0]+1, pIndices[1]-1);
        float subvalue = EvaluateExpression(subexpr);
        
        // now the sub-paranthesis has been evaluated
        
    }
}

int* FindParanthesis(std::string expr)
{
    // look for '(' or '['. 
    // if found, look for ')' or ']' and return the indices
    
    // if not found, return {-1, -1}
}


int main()
{
    char ops[] = {'^', '*', '/', '%', '+' , '-'};
    std::string inpStr;
    
    std::cout << "Enter an expression \n";
    std::cin << inpStr;
    
    
    
    std::cout << '\n';
    return 0;
}
