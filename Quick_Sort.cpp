// Quick_Sort.cpp

#include<iostream>
#include<vector>
#include<cstlib>


int Partition2(vector<int> a, int l, int r) {
  int x = a[l];
  int j =l;
  for (int i = l+1; i <=r; i++) {
      if(a[i] <= x) {
        j++;
        swap(a[i],a[j]);
      }
  }
  swap(a[l],a[j]);
  return j;
}

void RandomizedQuickSort(vector<int> a, int l, int r) {

  int m = rand() % (a.size());
  
  Partition2(int )
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
  
int l;
int r;
  
RandomizedQuickSort(n,a);


// Output sorted vector
for(int i = 0; i <a.size(); i++) {
std::cout << a[i];
}

return 0;
}
