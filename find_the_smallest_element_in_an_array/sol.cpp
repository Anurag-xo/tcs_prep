// We can sort the array in ascending order, hence the smallest element will be
// at the 0th index.
// // sort the array in ascending order.
// // Print the 0th index.

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int sortArr(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  return arr[0];
}

int main() {
  vector<int> arr1 = {2, 5, 1, 3, 0};
  vector<int> arr2 = {8, 10, 5, 7, 9};

  cout << "The smallest element in the array is: " << sortArr(arr1) << endl;
  cout << "The smallest element in the array is: " << sortArr(arr2);
}
