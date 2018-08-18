/**
* This programme takes a String input and outputs its binary form.
*
* Sample Input : Hello
* 
* Sample Output : 1001000 (H)
*                 1100101 (e)
*                 1101100 (l)
*                 1101100 (l)
*                 1101111 (o)
*
*[Note : Bracket part is not to be printed.]
*
*/

#include <iostream>
#include <string.h>
#include <cmath>

void Binary(int);     // Function takes the integer value as input and
 

int main()
{
	int i;
		
	std::string st;
	
	std::cout << "Enter the Word/s :" << std::endl;
	getline(std::cin, st);
	
	for(i = 0; i < st.length(); i++)
	{
		// Sends the ascii value of the i-th character of the given String.
		Binary((int)st[i]);
	}
}

void Binary(int ch)
{
	int j,k;
	int arr[8] = {0};
	
	for(j = 7; j >= 0; j--)
	{
		/** Checks if the i-th position of the ascii has 
		    a 1 or 0 and stores it in the corresponding 
		    array position.
		    The loop is run backwards for the ease of printing.
		*/
		arr[j] = ch % 2;
		ch = ch / 2;
	}
	
	for(k = 0; k < 8; k++)
		std::cout << arr[k];  // Main printing statement.
	
	std::cout << "\n";
}
































