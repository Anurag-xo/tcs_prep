#include <bits/stdc++.h>
using namespace std;

// Method 1
void getSorted1(string s) {
  sort(s.begin(), s.end());
  for (auto x : s)
    cout << x;
  cout << endl;
}

// Method2
void getSorted2(string s) {
  set<char> st(s.begin(), s.end());
  for (auto x : st) {
    cout << x;
  }
  cout << endl;
}

int main() {
  string s;
  cin >> s;
  getSorted1(s);
  getSorted2(s);
  return 0;
}
