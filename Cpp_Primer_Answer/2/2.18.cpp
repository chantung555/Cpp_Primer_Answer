#include<iostream>

int main()
{
	int *p = 0;
	int a = 520;

	p = &a;
	*p = *p + 1;

	std::cout << "p = : " << p <<
			"\n*p = : " << *p << std::endl;

	return 0;
}
