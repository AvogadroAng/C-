#include <iostream>
#include <cstring>
#include <cstdio>

char st1[500], st2[500];

int main()
{
	int flag = 0;
	
	std::cout << "Enter two strings:" << std::endl;
	std::cin >> st1;
	std::cin >> st2;
	
	for(int i = 0; i < 500; i++)
	{
		if(st1[i] != st2[i])
		{
			std::cout << st1[i] - st2[i] << std::endl;
			flag = 1;
			break;
		}
		if(st1[i] == '\0')
		{
			std::cout << -st2[i] << std::endl;
			flag = 1;
			break;
		}
		if(st2[i] == '\0')
		{
			std::cout << st1[i] << std::endl;
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		std::cout << "Strings are exactly equal." << std::endl;
	}
}
