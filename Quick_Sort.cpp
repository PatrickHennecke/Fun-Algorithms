#include<iostream>


void Partition2() {



}

void RandomizedQuickSort(int n, vector<int> a) {

}

// Input size of vector
int main() {
int n;
std::cin >> n;

// Input for vector a
vector<int> a[n];
for(int i = 0; i < a.size(); i++) {
std::cin >> a[i];
}

RandomizedQuickSort(n,a);


// Output sorted vector
for(int i = 0; i <a.size(); i++) {
std::cout << a[i];
}

return 0;
}
