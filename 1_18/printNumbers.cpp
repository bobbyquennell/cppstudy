/*
* Exercise 1.18: Write a program that prompts the user for two numbers and writes each
* number in the range specified by the two numbers to the standard output.
*/
#include <iostream>
int main()
{
    int v1, v2, low, high;
    std::cout << "please input two numbers " << std::endl;
    std::cin >> v1 >> v2;
    if (v1 >= v2)
    {
        low  = v2+1;
        high = v1;
    } 
    else
    {
        low =  v1+1;
        high = v2;
    }
    while (low < high)
    {
        std::cout << low << std::endl;
        low++;
    }

    return 0;
}