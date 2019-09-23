/* Given an integer, n (user input) display the nth Fibonacci number. */

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;


int fibonacci(int n) {

	static vector<int> fib = { 0,1 };
	int max = fib.size();

	if (n < max)
	{
		return fib[n];
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			int number = 0;
			number = fib[i - 1] + fib[i - 2];
			fib.push_back(number);
		}

		return fib[n];
	}
}


int main() {
	int n = 0;
	cin >> n;

	cout << fibonacci(n) << '\n';
	return 0;
}