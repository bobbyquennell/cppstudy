/*Exercise 1.20: Write a program to sum the numbers in a user-specified range, omitting the if
test that sets the upper and lower bounds. Predict what happens if the input is the
numbers 7 and 3, in that order. Now run the program giving it the numbers 7 and 3, and see
if the results match your expectation. If not, restudy the discussion on the for and while
loop until you understand what happened.
*/
#include <iostream>
int main()
{
    int v1,v2,low,high,sum = 0;
    std::cout<< "please input two numbers" << std::endl;
    std::cin>> v1 >> v2;
//#if 0
    if (v1 <= v2)
    {
        low = v1+1;
        high = v2;
    } 
    else
    {
        low = v2+1;
        high = v1;
    }
//#endif

    for (; low < high; low++)
    {
        sum +=low;
    }
    std::cout << "the sum of numbers between " << v1 << " and "
        << v2 << " is " << sum << std::endl;

    return 0;
}