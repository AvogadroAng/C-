//A programme to swap two variables without using a third value.

#include <iostream>

int main()
{
	int a = 0, b = 0;
	std::cout << "Enter two numbers and I will swap them:" << std::endl;
	std::cin >> a;
	std::cin >> b;

/*
 * say, a = 3 & b = 2
 * then a = a + b = 5
 * then b = a - b = 5 - 2 = 3 (now b=3)
 * then a = a - b = 5 - 3 = 2 (now a=2)
 * They are swapped.
 */
	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << "First =" << a << "; Second =" << b << std::endl;
}
