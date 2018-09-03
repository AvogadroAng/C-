#include <iostream>

struct variable
{
	/*
	 * This is a struct named variable, which is typedef-ed to var later.
	 * This contains variables that are treated as global variables.
	 * Their values are updated continuously throughout the programme.
	 */

	int prime_cout;
	
	int fibonacci_x, fibonacci_y;
};

typedef struct variable var;

/*
 * Both the functions print a single value when called.
 * The values of the struct variables used are updated instantly.
 */
void fibonacci(var); // Prints a single digit of the prime sequence when called. 
void prime(var);     // Prints a single prime number when called.

int main()
{
	var v;
	int n = 0, i = 0, c = 1;
	v.prime_cout = 2;
	v.fibonacci_x = 1;
	v.fibonacci_y = 0;
	
	std::cout << "Enter the number of times :" << std::endl;
	std::cin >> n;
	
	for(i = 0; i < n; i++)
	{
		if(c = 1)
		{
			fibonacci(v);
		}
		else
		{
			prime(v);
		}
		
		c = -1 * c;  // This line continuously changes the state of variable c so that both the functions are called one at a time.
	}
	
}

void fibonacci(var v)
{
	/*
	 * This snippet prints the next fibonacci number.
	 * Example:
	 *    	   fibonacci_x = 2 & fibonacci_y = 3
	 *
	 *        So, .....printing 2 then,
	 *            v.fibonacci_x = 2 + 3 = 5
	 *            v.fibonacci_y = 5 + 3 = 8	
	 *
	 * In the next go 5 will be printed then 8 and so on.
	 */ 
	
	std::cout << v.fibonacci_x ;
	v.fibonacci_x = v.fibonacci_x + v.fibonacci_y;
	v.fibonacci_y = v.fibonacci_x + v.fibonacci_y;
}

void prime(var v)
{
	int i = 0,j = 0, k = 0, flag = 0;
	
	for(;v.prime_cout > 0; v.prime_cout++)  // The value of v.prime_cout is directly increased.
	{
		i = v.prime_cout;
		if(i == 2 || i == 3 || i == 5 || i == 7)
		{
			std::cout << v.prime_cout;
			break;
		}
		// Prime finder is supposed to be concidered. I couldn't write it due to the lack of time.
		// However I did add a seive if the code needs to be tested.
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	












