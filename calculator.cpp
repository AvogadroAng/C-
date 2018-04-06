//This is the simplest calculator available on earth.

#include <iostream>

int calc(int);
int a = 0, b = 0;

int main()
{
	int cont = 0;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "Enter :" << std::endl;
	std::cout << "1 => Addition" << std::endl;
	std::cout << "2 => Substraction" << std::endl;
	std::cout << "3 => Multiplication" << std::endl;
	std::cout << "4 => Division" << std::endl;
	std::cin >> cont;
	std::cout << calc(cont) << std::endl;
}

int calc(int n)
{
	if(n == 1)
		return a + b;

	if(n == 2)
		return a - b;

	if(n == 3)
		return a * b;

	if(n == 4)
		return a / b;
}


