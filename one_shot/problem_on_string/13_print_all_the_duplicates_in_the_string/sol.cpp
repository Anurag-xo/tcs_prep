#include <bits/stdc++.h>
using namespace std;

void getDuplicates(string s) {
  int n = s.length();
  map<char, int> mp;

  for (int i = 0; i < n; i++) {
    mp[s[i]]++;
  }
  for (auto x : mp) {
    if (x.second > 1) {
      cout << x.first << "-" << x.second << endl;
    }
  }
}

int main() {
  string str;
  cin >> str;
  getDuplicates(str);
  return 0;
}
