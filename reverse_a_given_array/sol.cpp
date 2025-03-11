// solution 1: Using an extra array.
//
// Declare an array , ans[] of the same size as the input array. Iterate from
// the back of the input array while storing the elements in ans[] in opposite
// direction.

#include <iostream>
using namespace std;

void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}
// Fucntion to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
  int ans[n];
  for (int i = n - 1; i >= 0; i--) {
    ans[n - i - 1] = arr[i];
  }
  printArray(ans, n);
}
int main() {
  int n = 5;
  int arr[] = {5, 4, 3, 2, 1};
  reverseArray(arr, n);
  return 0;
}
