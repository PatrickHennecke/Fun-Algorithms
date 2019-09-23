// LCM.cpp

#include <iostream>
#include <vector>

using namespace std;

uint64_t gcd(uint64_t a, uint64_t b) {


	uint64_t first;
	uint64_t second;

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

	uint64_t m = second;

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

uint64_t lcm(uint64_t a, uint64_t b) {

	uint64_t answer;

	if (a == 0 || b == 0)
		return 0;
	else
	{
		uint64_t multiply = a * b;

		uint64_t divisor = gcd(a, b);

		answer = multiply / divisor;
	}

	return answer;

}

int main() {
	uint64_t a; uint64_t b;
	cin >> a >> b;
	cout << lcm(a, b) << endl;
}

