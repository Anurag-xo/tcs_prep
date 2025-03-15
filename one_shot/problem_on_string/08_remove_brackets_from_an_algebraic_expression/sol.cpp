#include <bits/stdc++.h>
using namespace std;

void removeBrackets(string s) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != '(' && s[i] != ')') {
      cout << s[i];
    }
  }
}

int main() {
  string str = "(((a-b))+c)";
  removeBrackets(str);
  return 0;
}
