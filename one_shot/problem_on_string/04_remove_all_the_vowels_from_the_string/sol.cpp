#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void RemoveVowels(string s) {
  string res = "";
  for (int i = 0; i < s.length(); i++) {
    char ch = tolower(s[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      continue;
    } else {
      res += s[i];
    }
  }

  for (int i = 0; i < res.length(); i++) {
    cout << res[i];
  }
}

int main() {
  string str;
  getline(cin, str);
  RemoveVowels(str);
  return 0;
}
