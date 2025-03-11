// use of two loops
// We can simply use two loops, in which the first loop points to one element
// and the second loop finds that element in the remaining array. We will keep
// track of the occurrence of that same element by maintaining a count variable.
// We also have to maintain a visited array so that it will keep track of the
// duplicate elements that we already count.
//
// Approach:
// Make a visited array of type boolean.
// Use the first loop to point to an element of the array.
// Initialize the variable count to 1.
// Make that index true in the visited array.
// Run second loop, if we find the element then mark the visited index true and
// increase the count. f the visited index is already true then skip the other
// steps.

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countFreq(int arr[], int n) {
  vector<bool> visited(n, false);

  for (int i = 0; i < n; i++) {

    // Skip the element if already processed
    if (visited[i] == true)
      continue;

    // count frequency
    int count = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        visited[j] = true;
        count++;
      }
    }
    cout << arr[i] << " " << count << endl;
  }
}

int main() {
  int arr[] = {10, 5, 10, 15, 10, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  countFreq(arr, n);
  return 0;
}
