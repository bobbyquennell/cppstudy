/*
Exercise 1.24: Write a program that reads several transactions. For each new transaction
that you read, determine if it is the same ISBN as the previous transaction, keeping a count
of how many transactions there are for each ISBN. Test the program by giving multiple
transactions. These transactions should represent multiple ISBNs but the records for each
ISBN should be grouped together.
*/
#include <iostream>
#include "Sales_item.h"
//#define INVALID_ITEMINDEX 0xFFFFFFFF;
int main()
{
    Sales_item item[20],itemNew;
    int itemIndex = 0xffffffff;
    int ISBNcounter =0;
    int loop = 0;
    int isfirstInput = 0;

    std::cout << "please input several sale transactions " << std::endl;

    while ((std::cin >> itemNew))
    {
        if (isfirstInput == 0)
        {
            item[0] = itemNew;
            ISBNcounter++;
            isfirstInput = 1;
            std::cout << "get your first item successfully!" << std::endl;
            std::cout << " Total ISBN num is " << ISBNcounter << std::endl;
        }
        else
        {    
            //scan for already used ISBN:
            itemIndex = 0xffffffff;
            for (loop=0; loop < ISBNcounter; loop++)
            {
               if (item[loop].same_isbn(itemNew))
               {
                   itemIndex = loop;
                   break;
               }               
            }
			// found existed ISBN:
            if (itemIndex != 0xffffffff)
            {
                item[itemIndex] += itemNew;
                std::cout << "add this transaction to your old item: " << itemIndex << std::endl;
                std::cout << " Total ISBN num is " << ISBNcounter << std::endl;
            } 
			// new ISBN
            else
            {
                itemIndex = ISBNcounter;
                ISBNcounter++;
                item[itemIndex] = itemNew;
                std::cout << "add this transaction to a new item: " << itemIndex << std::endl;
                std::cout << " Total ISBN num is " << ISBNcounter << std::endl;

            }
        }
    }
    std::cout << "transactions input complete " << std::endl;
    std::cout <<"total ISBN num: " << ISBNcounter << std::endl;
    for (int n = 0; n < ISBNcounter; n++)
    {
        std::cout << item[n] << std::endl;
    }
    return 0;
}