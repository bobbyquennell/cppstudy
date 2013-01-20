#include <iostream>
int main()
{
	int sum = 0, value, count = 0;
	/*
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "the sum is :" << sum << std::endl;
	*/
	while (std::cin >> value)
	{
		if (value < 0)
		{
			count++;
		}
	}
	std::cout << " the total numbers of negative num is :" << count <<std::endl;
	return 0;
}