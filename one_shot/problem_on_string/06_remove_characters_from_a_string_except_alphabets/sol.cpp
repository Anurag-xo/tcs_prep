#include <bits/stdc++.h>
using namespace std;

void removeCharacters(string s) {
  for (int i = 0; i < s.length(); i++) {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      cout << s[i];
    }
  }
}

int main() {
  string s;
  getline(cin, s);
  removeCharacters(s);
  return 0;
}
