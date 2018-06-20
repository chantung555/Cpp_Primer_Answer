#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1;
	int count = 1;

	while (std::cin >> item2) {
		if (item1.isbn() == item2.isbn()) {
			count++;
		}
		else {
			std::cout << "The book " << item1.isbn() << " was sold " << count << " times." << std::endl; 
			item1 = item2;
			count =1;
		}
			
	}

	std::cout << "The book " << item1.isbn() << " was sold " << count << " times." << std::endl;

	return 0;
}
