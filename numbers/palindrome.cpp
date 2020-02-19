/*
 Get the sum of digits in an integer
 and get the sum of the digits. 
 Also check if the number is a 'palindrome'
*/
#include <iostream>
#include <climits>
#include <string>
#include <cmath>

long int ExtractNumber(std::string str)
{
    /* This is no limit to how throughly
     * this function can be written... 
     * but here are some things I thought of adding
    */
    char hat = '^';
    long int num;
    int index = str.find(hat);
    
    if(index != std::string::npos)
    {
        int base, power;
        
        // The user gave the input in power form
        std::string left = str.substr(0, index); //str[0,index-1];
        std::string right = str.substr(index+1, str.length()-1); //str[index+1:str.length()-1];
        
        // convert them to numbers 
        base = std::stoi(left);
        power = std::stoi(right);
        
        num = pow(base, power);
    }
    else
    {
        // a normal input
        num = std::stoi(str);
    }
    return num;    
}

int main()
{
    std::string inpStr;
    long int num, sum, rev, numc;
    int rm;
    bool firstIter = true;
    
    // Get the number
    std::cout << "Enter an integer \n";
    std::cin >> inpStr;
    num = ExtractNumber(inpStr);
        
    std::cout << "\nThe integer entered: " << num << '\n';
    
    sum = 0;
    numc = num; // just a copy
    while(num!=0)
    {
        // get the last digit and it to the sum
        rm = num%10;
        sum += rm;
        
        // put the last digit in the reversed number
        if(firstIter)
            rev = rm;
        else
            rev = rev*10 + rm;
        
        // strip the last digit
        num /= 10;
        
        // update boolean for first iteration
        if(firstIter)
            firstIter = false;
    }
    
    // put the results out
    std::cout << "Sum of the digits: " << sum << '\n';
    std::cout << "Reversed number: " << rev << '\n';
    if(numc == rev)
        std::cout << "The entered number is a palindrome \n";
    else
        std::cout << "The entered number is not a palindrome \n";
    
    return 0;
}