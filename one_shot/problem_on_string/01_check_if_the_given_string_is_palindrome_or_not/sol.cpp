#include <bits/stdc++.h>
using namespace std;

bool isPlaindrome(string str) {
  int i = 0;
  int j = str.length() - 1;

  while (i < j) {
    if (str[i] != str[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  string str;
  cin >> str;
  cout << boolalpha << isPlaindrome(str);
  return 0;
}
