#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Method 1:
// TC: O(n)
// SC: O(n)

void getReverse1(string s) {
  for (int i = s.length(); i >= 0; i--) {
    cout << s[i];
  }
  cout << endl;
}

// METHOD 2:
// TC: O(n)
// SC: O(1)

void getReverse2(string s) {
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.length(); i++) {
    cout << s[i];
  }
  cout << endl;
}

int main() {
  string s;
  getline(cin, s);
  getReverse1(s);
  getReverse2(s);
  return 0;
}
