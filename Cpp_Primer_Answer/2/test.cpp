#include<iostream>

int main()
{
	int i = 1024;
	int &m = i;
	const int &n = i;

	for( int j = 0; j < 3; j++)
	{
		std::cout << n << std::endl;
		m++;
	}

	return 0;
}
