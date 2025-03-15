// Approach:
//
// 1. Take two pointers i, j
// 2. i will be for iterating arrayn and j for marking 0s position.
// 3. if arr[i] = 0, then do nothring simply move i to next position.
// 4. If arr[i] != 0, then swap arr[i], arr[j] and move both i and j to next
// position.

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int j = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
