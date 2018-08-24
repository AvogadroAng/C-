#include <iostream>
#include <string>

int binary[128];
void oneZero(int);

int main
{
	std::string str;
	
	std::cout << "Please Enter Your Name:" << std::endl;
	getline(std::cin,str);
	
	for(int i = 0; i < 128; i++)
		binary[i] = 3;
	
	for(int i = 0; i < st.lengt(); i++)
	{
		oneZero((int)(st[i]));
	}
	
	for(int i = 0; i < 128; i++)
		std::cout << binary[i]; 
		
	return 0;
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























