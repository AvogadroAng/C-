#include <iostream>

int fib(int); // prototype

int main()
{
	int terms = 0;
	std::cout << "Please enter the no. of terms to display." << std::endl;
	std::cin >> terms;
	for(int i = 1 ; i <= terms; i++)
		std::cout << fib(i) << std::endl;
	return 0;
}

int fib(int n)
{
	if ( n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
