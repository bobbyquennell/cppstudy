/*
Exercise 1.22: Write a program that reads two Sales_item objects that have the same ISBN
and produces their sum.
*/
#include "Sales_item.h"
#include<iostream>

int main()
{
    Sales_item item1, item2;

    std::cout << "in put 2 sales items " << std::endl;
    std::cin  >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return;

}