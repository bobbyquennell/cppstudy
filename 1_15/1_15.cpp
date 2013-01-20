#include <iostream>
int main()
{
	int v1, v2;
	std::cout << "pls input 2 values: " << std::endl;
	std::cin >> v1 >> v2;
	int lower, upper;
	if (v1 >= v2)
	{
		lower = v2;
		upper = v1;
	} 
	else
	{
		lower = v1;
		upper = v2;
	}
	int i, sum = 0;
    for (i = lower; i<=upper; ++i)
    {
		sum += i;
    }
	std::cout << "the sum of numbers between " << lower << " and " << upper << " is " << sum << std::endl;
	return 0;
}