/*Exercise 1.18: Write a program that prompts the user for two numbers and writes each
number in the range specified by the two numbers to the standard output.
Exercise 1.19: What happens if you give the numbers 1000 and 2000 to the program written
for the previous exercise? Revise the program so that it never prints more than 10 numbers
per line.*/
#include<iostream>
int main()
{
    int v1,v2,low,high,loop,counter = 0;
    std::cout<<"please input two values " << std::endl;
    std::cin >> v1 >> v2;
    
    if (v1<= v2)
    {
        low = v1+1;
        high = v2;
    } 
    else
    {
        low = v2+1;
        high =v1;
    }

    for (loop = low; loop < high; loop++)
    {
        std::cout<< loop;
        counter++;
        if (0 == (counter%10))
        {
            std::cout << std::endl;
        }
    }

    return;
}