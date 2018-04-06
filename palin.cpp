// wap to check if a numnber is palindrome or not.
#include <iostream>

bool isPalin(int);

int main()
{
	int pal = 0;
	std::cout << "Enter a number to check whether it is palindrome or not" << std::endl;
	std::cin >> pal;
	std::cout << isPalin(pal) << std::endl;
}

bool isPalin(int n)
{
	int dgt = 0, copy = n;
	while(copy > 0)
	{
		dgt = dgt*10 + copy%10;
		copy = copy/10;
	}
	if(dgt==n)
		return true;
	else
		return false;
}

