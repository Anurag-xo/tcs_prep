// Brute force approach
// {this approach only works if there are no duplicates}
// Approach:
// sort the array in ascending order
// The element present at the second index is the second smallest element
// the element present at the second index from the end is the second largest
// element.

#include <bits/stdc++.h>
using namespace std;

void getElement(int arr[], int n) {
  if (n == 0 || n == 1)
    cout << -1 << " " << -1 << endl;
  sort(arr, arr + 1);
  int small = arr[1];
  int large = arr[n - 2];
  cout << "Second smallest is " << small << endl;
  cout << "Second largest is " << large << endl;
}

int main() {
  int arr[] = {1, 2, 4, 6, 7, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  getElement(arr, n);
  return 0;
}
