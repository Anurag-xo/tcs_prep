#include <bits/stdc++.h>
using namespace std;

void countWords(string s) {
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      count++;
    }
  }
  cout << "Number of words: " << count + 1 << endl;
}

int main() {
  string str = "I am iron man";
  countWords(str);
  return 0;
}
