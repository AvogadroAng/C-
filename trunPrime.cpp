#include <iostream>
#include <cmath>

int dgtnum(int);
bool prime(int);
bool lTrunc_prime(int);
bool rTrunc_prime(int);

bool prime(int n)
{
	for(int i = 2; i <= (int)sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
} 

int dgtnum(int n)
{
	int c = 0; 
	
	while(n != 0)
	{
		c++;
		n = n / 10;
	}
	
	return c;
}

bool lTrunc_prime(int n)
{
	if(prime(n) == false)
	{
		return false;
	}
	
	int c = dgtnum(n);
	
	while(n != 0)
	{
		n = n % (int)pow(10, c);
		
		if(prime(n) == false)
		{
			return false;
		}
		
		c--;
	}
	
	return true;
}

bool rTrunc_prime(int n)
{
	if(prime(n) == false)
	{
		return false;
	}
	
	while(n != 0)
	{
		n = n / 10;
		
		if(prime(n) == false)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int p = 0, choice = 0;

	std::cout << "Enter: " << "\n 1 => Left Truncated Prime" << "\n 2 => Right Truncated Prime" << std::endl;
	std::cin >> choice;
	
	std::cout << "Enter the number to be tested" << std::endl;
	std::cin >> p;
	
	switch(choice)
	{
		case 1:
		
			if(lTrunc_prime(p) == true)
			{
				std::cout << "It is a Left Truncated Prime." << std::endl;
			}
			else
			{
				std::cout << "It is not a Left Truncated Prime." << std::endl;
			}
			break;
		case 2:
		
			if(rTrunc_prime(p) == true)
			{
				std::cout << "It is a Right Truncated Prime." << std::endl;
			}
			else
			{
				std::cout << "It is not a Right Truncated Prime." << std::endl;
			}
			break;
		default:
			
			std::cout << "Please enter some affidable inputs." << std::endl;
	}
}
		




















