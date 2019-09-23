// Change.cpp 

/* Given an input, n (user input), display the amount of coins they get in change. 
For this problem coin denominations are simplified to 1, 5 and 10, 
i.e. 29 = 10 + 10 + 5 + 1 + 1 + 1 + 1. Thus the change output is 7 */

#include<iostream>

using std::cout;

// Function Change accepts input, n, from user then using 'if' statements allocates change in 10's, 5's and 1's.
int Change(int n)
{
	int change = 0;
	int A = n;

	while (A != 0)
	{
		// Give change in 10's
		if (A % 10 == 0)
		{
			A = A - 10;
			change += 1;
		}

		// Give change in 5's
		else if (A % 5 == 0)
		{
			A = A - 5;
			change += 1;
		}

		// Give change in 1's
		else
		{
			A = A - 1;
			change += 1;
		}
	}


	return change;
}


// Function main allows user to input an integer, n, (1 <= n <= 10^3) and then outputs Change function 
int main()
{
	int n;
	std::cin >> n;

	cout << Change(n);
}
