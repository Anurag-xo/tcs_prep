// A chocolate factory is packing chocolates into the packets. The chocolates
// packets here represeent an array of N number of integer values. The task if
// to find the empty packets(0) of chocolates and push it to the end of the
// conveyor belt(array).

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {

  int index = 0;
  int ans[n];

  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      ans[index] = arr[i];
      index++;
    }
  }

  while (index < n) {
    ans[index] = 0;
    index++;
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}
