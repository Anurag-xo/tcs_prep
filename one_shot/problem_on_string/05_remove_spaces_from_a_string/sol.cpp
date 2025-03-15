#include <bits/stdc++.h>
using namespace std;

void removeSpaces(string s) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != ' ') {
      cout << s[i];
    }
  }
}

int main() {
  string str;
  getline(cin, str);
  removeSpaces(str);
  return 0;
}
