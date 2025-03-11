// Using a min variable
// we can maintain a min variable which will update whenever the current value
// is less than the value in the min variable.
//
// Approcah:
// Create a min variable and initialize it with arr[0].
// Use a for loop and compare it with other elements of the array.
// If any element is less than the min value, update min value with element's
// value. Print the min variable.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int SmallestElement(int arr[], int n) {

  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int arr1[] = {2, 5, 1, 3, 0};
  int n = 5;
  int min = SmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;

  int arr2[] = {8, 10, 5, 7, 9};
  n = 5;
  min = SmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min;
  return 0;
}
