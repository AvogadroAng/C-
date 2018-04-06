//This programme converts temperatures from Farenheit to Celsius.

#include <iostream>

int main()
{
	int faren = 0, cel = 0;
	std::cout << "Enter the Temperature in Farenheit:" << std::endl;
    std::cin >> faren;

	cel = (faren - 32) / 1.8;

	std::cout << cel << std::endl;
}
