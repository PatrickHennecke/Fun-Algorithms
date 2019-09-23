// Max_Ad_Revenue.cpp

/* Given an input, n (user input), the user will input for two vectors each with length n. 
Vector a, is the profit per click for each ad.
Vector b, is the average number of clicks per day.
Allowing for permutation of vectors, display the Maximum Ad Revenue */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

uint64_t max_dot_product(int n, vector<uint64_t> a, vector<uint64_t> b) {
	
	uint64_t result = 0;

	sort(a.begin(), a.end(), greater <>());
	sort(b.begin(), b.end(), greater <>());

	for (int i = 0; i < n; i++) {
		result += a[i] * b[i];
	}

	return result;
}

int main() {
	size_t n;
	std::cin >> n;
	vector<uint64_t> a(n), b(n);
	for (size_t i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (size_t i = 0; i < n; i++) {
		std::cin >> b[i];
	}
	std::cout << max_dot_product(n,a, b) << std::endl;
}