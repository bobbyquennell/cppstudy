/*
* Exercise 1.10: Write a program that uses a for loop to sum the numbers from 50 to 100. Now
* rewrite the program using a while.
*/
#include <iostream>
int main() 
{
    int sum = 0, loop = 5;
#if 0
    for (int n=5; n<=100; n++)
    {
        sum += n;
    }
#endif
    while (loop <=100)
    {
        sum += loop;
        loop++;
    }
    std::cout << "The sum of numbers from 5 to 100 is "
              << sum << std::endl;
    return;
}