/*
Exercise 1.21: The Web site (http://www.awprofessional.com/cpp_primer) contains a copy
of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory.
Write a program that loops through a set of book sales transactions, reading each
transaction and writing that transaction to the standard output.
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item;
    std::cout << "please input book sales item " << std::endl;
    while (std::cin >> item)
    {
        std::cout << item << std ::endl;
    }

    return;
}