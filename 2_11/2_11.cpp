/* 
 * File:   2_11.cpp
 * Author: Bobby
 *Exercise 2.11:
 * 编写程序，要求用户输入两个数——底数（base）和指数
 * （exponent），输出底数的指数次方的结果。
 * Exercise 2.11: Write a program that prompts the user to input two numbers, the base and
 * exponent. Print the result of raising the base to the power of the exponent.
 * Created on January 27, 2013, 8:21 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
int main(int argc, char** argv) {
    int base, exponent, result;
    cout << "please input base value:" <<endl;
    cin >> base;
    cout << "please input exponent value:" << endl;
    cin >> exponent;
    if(0 == exponent)
    {
        result = 1;
    }
    else if(exponent > 0)
    {
        result = base;
        for(int n = 1; n <exponent; n++)
        {
            result *= base;
        }
    }
    else
    {
        cout << "exponent is invalid, please input a positive value:" << endl;
        return -1;
    }
    // print out the result to user:
    cout << base 
         << " raise to the power of "
         << exponent
         << " is: " << result << endl;
    
    return 0;
}

