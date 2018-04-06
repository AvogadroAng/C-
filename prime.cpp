// write a CPP program to check if a number is prime or not
#include <iostream>
#include <cmath>

bool isPrime(int);

int main()
{	
	int num = 0;
	std::cout << "Enter a number to check whether it is prime or not" << std::endl;
	std::cin >> num;
	std::cout << isPrime(num) << std::endl;
}

bool isPrime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;

	return true;
}

