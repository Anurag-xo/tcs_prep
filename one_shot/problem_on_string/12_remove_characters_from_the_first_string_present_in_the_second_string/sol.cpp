#include <bits/stdc++.h>
using namespace std;

void getCharacters(string s1, string s2) {
  for (int i = 0; i < s1.length(); i++) {
    bool flag = false;
    for (int j = 0; j < s2.length(); j++) {
      if (s1[i] == s2[j]) {
        flag = true;
      }
    }
    if (flag == false) {
      cout << s1[i];
    }
  }
}

int main() {
  string s1;
  string s2;
  cin >> s1 >> s2;

  getCharacters(s1, s2);
  return 0;
}
