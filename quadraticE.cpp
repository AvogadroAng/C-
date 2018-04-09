// This programme calculates the roots of a quadratic equation.

#include <iostream>
#include <cmath>

int rootCalc(int);
int discriminant();
int a = 0, b = 0, c = 0;

int main()
{
	std::cout << "Enter the co-efficients:" << std::endl;
	std::cout << "a = " << std::endl; std::cin >> a;
	std::cout << "b = " << std::endl; std::cin >> b;
	std::cout << "c = " << std::endl; std::cin >> c;

	int D = discriminant();

	rootCalc(D);
}

int discriminant()
{
	int x = pow( b, 2) - (4 * a * c);
	return x;
}

int rootCalc(int n)
{
	double pr = 0, nr = 0;
	if(D < 0)
	{
		D = D * -1;
		pr = (sqrt(D) - b)/ 2;
		nr = -1 * (sqrt(D) + b)/ 2;
		std::cout << "Roots =>" << pr << "i  " << nr << "i  " << std::endl;
	}
	else if(D == 0)
	{
		pr = -b/ 2;
		nr = pr;
		std::cout << "Roots =>" << pr << "  " << nr << std::endl;
	}
	else
	{
		pr = (sqrt(D) - b)/ 2;
		nr = -1 * (sqrt(D) + b)/ 2;
		std::cout << "Roots =>" << pr << "  " << nr << std::endl;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
