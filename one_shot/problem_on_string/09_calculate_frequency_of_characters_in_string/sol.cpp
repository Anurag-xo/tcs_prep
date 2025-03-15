#include <bits/stdc++.h>
using namespace std;

void printFrequency(string s) {
  map<char, int> mp;

  for (int i = 0; i < s.length(); i++) {
    mp[s[i]]++;
  }
  for (auto x : mp) {
    cout << x.first << x.second << " ";
  }
}

int main() {
  string str;
  getline(cin, str);
  printFrequency(str);
  return 0;
}
