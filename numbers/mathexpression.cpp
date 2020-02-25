/*
 * Evaluate a simple mathematical expression 
 * For example: 5 + 6 
 * this should give 11 as the answer. 
 * Interesting result - 
 * pow(0,0) used for 0 ^ 0 gives 1 
*/

#include <iostream>
#include <cmath>
#include <typeinfo>

void PrintOutput(float a, float b, float res, char op)
{
    std::cout << "\nThe operation you want is: ";
    if(op == '%')
    {
        std::cout << static_cast<int>(a)
                    << " " << op << " " 
                    << static_cast<int>(b) 
                    << " = " << res <<'\n';
        std::cout << "\nAny float values entered are converted to integers \n";
    }
    else
        std::cout << a << " " << op << " " << b << " = " << res <<'\n';
}


int main()
{
    char op;
    float a, b, res;
    
    // for later, a more general code: 
    // std::string inpStr;
    //float result = EvaluateExpression(inpStr);
    
    std::cout << "Enter an operator you want to use: \n";
    std::cin >> op;
    
    std::cout << "Enter the two numbers to be operated on: \n";
    std::cin >> a >> b;

    switch(op)
    {
        case '^':
            PrintOutput(a, b, pow(a, b), op);
            break;
        case '*':
            PrintOutput(a, b, a*b, op);
            break;
        case '/':
            PrintOutput(a, b, a/b, op);
            break;
        case '%':
        {
            int a1 = static_cast<int>(a);
            int b1 = static_cast<int>(b);
            PrintOutput(a1, b1, a1%b1, op);
            break;
        }
        case '+':
            PrintOutput(a, b, a+b, op);
            break;
        case '-':
            PrintOutput(a, b, a-b, op);
            break;
    }
    
    return 0;
}
