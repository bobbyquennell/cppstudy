#include <iostream>
int main()
{
	int v1, v2;
	std::cout << "pls input 2 values:" << std::endl;
	std::cin >> v1 >> v2;
	if (v1 >= v2)
	{
		std::cout << v1 << std::endl;
	} 
	else
	{
		std::cout << v2 << std::endl;
	}
	return 0;
	
}