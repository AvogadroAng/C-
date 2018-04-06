//This programme is a calculator of salary.

#include <iostream>

int main()
{
    int sal = 0, da = 0, hra = 0;
    std::cout << "Enter the Salary:" << std::endl;
    std::cin >> sal;
    std::cout << "Enter the Dearness Allowance:" << std::endl;
    std::cin >> da;
    std::cout << "Enter the House Rent Allowance:" << std::endl;
    std::cin >> hra;
    std::cout << sal + da + hra << std::endl;
}

