#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int arr[n];
  int leftsum[n];
  int rightsum[n];
  int equidx = -1;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // fill leftsum array
  int left = 0;
  for (int i = 0; i < n; i++) {
    leftsum[i] = left;
    left += arr[i];
  }

  // fill the rightsum array
  int right = 0;
  for (int i = n - 1; i >= 0; i--) {
    rightsum[i] = right;
    right += arr[i];
  }

  // compare and assign equidx
  for (int i = 0; i < n; i++) {
    if (leftsum[i] == rightsum[i]) {
      equidx = i;
      break;
    }
  }

  cout << equidx << endl;
  return 0;
}
