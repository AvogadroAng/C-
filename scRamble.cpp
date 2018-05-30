#include <iostream>
#include <cstdlib>
#include <math.h>

int fd(int);

int main()
{
	std::cout << "Lets Play scramble !!!" << std::endl;
	std::cout << "Enter 10 digits for the array." << std::endl;
	
    int arr[10];
	
	for(int i = 0; i < 10; i++)
		std::cin >> arr[i];
		
	int x = rand(), y = rand(), a,b,t;
	
	for(int i = 0; i < rand(); i++)
	{
		a = ((x % 10)+(y % 10)) % 10;
		b = (fd(x) + fd(y)) % 10;
		
		t = arr[a];
		arr[a]=arr[b];
		arr[b]=t;
	}
	
	for(int i = 0; i < 10; i++)
		std::cout << arr[i];
}

int fd(int n)
{
	int copy = n, c = 0;
	while(copy > 0)
	{
		copy = copy/10;
		c++;
	}
	
	return (n/pow(10,c));
}
