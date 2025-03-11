// sorting
// We can sort the array in ascendinf order, hence the largest element will be
// at the last index of the array.
//
// Approach:
// Sort the array in ascending order.
// Print the (size of the array - 1)th index.

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int sortArr(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  return arr[arr.size() - 1];
}

int main() {
  vector<int> arr1 = {2, 5, 1, 3, 0};
  vector<int> arr2 = {8, 10, 5, 7, 9};

  cout << "The largest element in the array is: " << sortArr(arr1) << endl;
  cout << "The largest element in the array is: " << sortArr(arr2);

  return 0;
}
