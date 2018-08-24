#include <iostream>
#include <string>

void oneZero(int);
int binary[128];

int main()
{
	std::string str;
	
	std::cout << "Please Enter Your Name:" << std::endl;
	getline(std::cin,str);
	
	for(int i = 0; i < 128; i++)
	{
		binary[i] = 3;
	}
	
	for(int i = 0; i < str.length(); i++)
	{
		oneZero((int)(str[i]));
	}
	
	for(int i = 0; i < 128; i++)
	{
		if(binary[i] != 3)
		{
			std::cout << binary[i];
		}
	}
	
	std::cout << "\n";
}

void oneZero(int n)
{
	int j;
	
	for(j = 0; binary[j] != 3; j++);
	
	for(int k = j; k < 128 && n != 0; k++)
	{
		binary[k] = n % 2;
		n = n / 2;
	}
}























