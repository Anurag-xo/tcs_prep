#include <bits/stdc++.h>
using namespace std;

void getNonRepeating(string s) {
  map<char, int> mp;

  for (int i = 0; i < s.length(); i++) {
    mp[s[i]]++;
  }

  for (auto x : mp) {
    if (x.second == 1) {
      cout << x.first << " ";
    }
  }
}

int main() {

  string str = "google";
  getNonRepeating(str);

  return 0;
}
