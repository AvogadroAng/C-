#include <iostream>

int main()
{
	int ord = 0, i = 0, j = 0, c = 0, flag = 1, flag2 = 1;
	
	std::cout << "Enter the ORDER of the matrix:   " << std::endl;
	std::cin >> ord;
	
	int arr[ord][ord];
	
	for(i = 0; i < ord; i++)
	{
		for(j = 0; j < ord; j++)
		{
			arr[i][j] = 0;
		}
	}
	
	for(i = 0, j = 0;c <= ord*ord;)
	{
		if(flag == 1)
		{
			for(;j < ord; j = j + flag2)
			{
				if(arr[i][j] == 0)
					arr[i][j] = ++c;
				else
					break;
			}
			flag = -1 * flag;
		}
		
		else if(flag == -1)
		{
			for(;i < ord; i = i + flag2)
			{
				if(arr[i][j] == 0)
					arr[i][j] = ++c;
				else
					break;
			}
			flag2 = -1 * flag2;
			flag = -1 * flag;
		}
		std::cout << i << " = i " << j << " = j " << c << " = c" << std::endl; 
	}
	for(i = 0; i < ord; i++)
	{
		for(j = 0; j < ord; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout<<"\n";
	}
}
