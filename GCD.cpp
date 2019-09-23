// GCD.cpp

#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {

	int first;
	int second;

	if (a > b)
	{
		first = a;
		second = b;
	}
	else
	{
		first = b;
		second = a;
	}

	int m = second;

	while (first % second != 0)
	{
		if (first % second != 0)
		{
			m = first % second;
			first = second;
			second = m;

		}
		else {
			return second;
		}
	}
	

	return m;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}