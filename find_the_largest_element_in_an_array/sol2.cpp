// Recursice approach
// Using a max variable
//
// We can maintain a max variable that will update whenever the current value is
// greater than the value in the max variable.
//
// Approach:
// Create a max variable and initialize it with arr[0].
// Use a for loop and compae it with other elements of the array.
// If any elements is greater than the max value, update max value with the
// element's value. Print the max variable.

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {

  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr1[] = {2, 5, 1, 3, 0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;

  int arr2[] = {8, 10, 5, 7, 9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max << endl;
  return 0;
}
