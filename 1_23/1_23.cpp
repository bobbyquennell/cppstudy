/*Exercise 1.23: Write a program that reads several transactions for the same ISBN. Write the
sum of all the transactions that were read.
*/
#include "Sales_item.h"
#include <iostream>

int main()
{
#if 0
    Sales_item item1, item2, item3;
    std::cout << "input 3 sales transactions " << std::endl;
    std::cin >> item1 >> item2 >> item3;
    std::cout << item1 + item2 + item3 << std::endl;
#endif
    Sales_item InputItem, Sum;
    std::cout << "input several sales transactions" << std::endl;
    while (std::cin >> InputItem)
    {
        Sum += InputItem; //???Sum hasn't been initialized??
    }
    std::cout << Sum << std::endl;
    
    return;
}