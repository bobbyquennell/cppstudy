/* Exercise
 *3.1:
 *用适当的 using 声明，而不用 std::，访问标准库中名
 *字的方法，重新编写第 2.3 节的程序，计算一给定数的
 *给定次幂的结果。
 * Exercise 3.1: Rewrite the program from Section 2.3 (p. 43) that calculated the result of
 *raising a given number to a given power to use appropriate using declarations rather than
 *accessing library names through a std:: prefix.
 * File:   3_1.cpp
 * Author: Bobby
 *
 * Created on January 28, 2013, 9:46 PM
 */

#include <cstdlib>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int base, exponent, result, loop;
    cout << "please give me a base value: " << endl;
    cin >> base;
    cout << "please give me a exponent value: " << endl;
    cin >> exponent;
    if(exponent < 0)
    {
        cout << "invalid exponent, please input a positive value" << endl;
        return (-1);
    }
    result = base;
    if(0 == base)
    { 
        result = 0;
    }
    else if(1 == base)
    {
        result = 1;
    }
    else
    {
        if(0 == exponent)
            result = 1;
        else if (1 == exponent)
            result = base;
        else
        {
            for(loop = 1; loop < exponent; loop++)
                result *= base;
        }
    }
    cout << base << " raise to the power of " << exponent << "equals: "
         << result << endl;
    return 0;
}

