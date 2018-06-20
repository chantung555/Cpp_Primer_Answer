#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;

	while (item1.isbn() != item2.isbn()) {
		if (!(std::cin >> item2)) {
			std::cout << "Data must refer to same ISBN." << std::endl;
			return 0;
		}

	}

	std::cout << item1 + item2 << std::endl;
	return 0;
}
