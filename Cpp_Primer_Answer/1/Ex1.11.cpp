#include<iostream>

int main()
{
	int i,j;

	std::cout << "Input two integers." << std::endl;
	std::cin >> i >> j;

	if (i > j)
	{
		int temp;
		temp = j;
		j = i;
		i = temp;
	}

	while (i <= j)
	{
		std::cout << i++ << std::endl;
	}

	return 0;
}

