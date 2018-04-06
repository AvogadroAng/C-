//This programme takes a radius and calculates the area of a circle.

#include <iostream>

int main()
{
	double pi = 3.1415926, r = 0;
	std::cout << "Enter the radius:" << std::endl;
	std::cin >> r ;
	double area = pi * r * r;
	std::cout << area << std::endl;
}
