#include <bits/stdc++.h>
#include <ios>
using namespace std;

bool isAnagram(string s1, string s2) {
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1.length() != s2.length()) {
    return false;
  }
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] != s2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << boolalpha << isAnagram(str1, str2);
  return 0;
}
