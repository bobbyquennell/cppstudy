/*
* Exercise 1.4: Our program used the built-in addition operator, +, to generate the sum of two
* numbers. Write a program that uses the multiplication operator, *, to generate the product
* of two numbers.
*/
#include <iostream>
int main()
{
    int v1, v2;
    std ::cout << "please input two numbers " << std::endl;
    std ::cin >> v1 >> v2;
    std ::cout <<"the product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
    return;
}