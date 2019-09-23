// Fibonacci_Last_Digit.cpp

/* Given an integer, n (user input), display the last digit of the Nth Fibonacci number
For example F_200 = 5 */

#include <iostream>
#include <vector>

using namespace std;

int get_fibonacci_last_digit(int n) {

	if (n <= 1)
		return n;

	static vector<long long> fibonacci = { 1,1 };
	int max = fibonacci.size();

	for (int i = max; i < n; ++i) {
		fibonacci.push_back((fibonacci[i - 1] + fibonacci[i - 2]) % 10);
	}

	return fibonacci[n-1];
}

int main() {
	int n;
	std::cin >> n;
	long long c = get_fibonacci_last_digit(n);
	std::cout << c << '\n';
}