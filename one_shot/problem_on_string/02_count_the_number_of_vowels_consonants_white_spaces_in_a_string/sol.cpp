#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void solve(string str, int n) {
  int count_v = 0;
  int count_c = 0;
  int count_s = 0;

  for (int i = 0; i < n; i++) {
    char ch =
        tolower(str[i]); // to convert lowercase to simplify vowel checking
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      count_v++;
    } else if (ch == ' ') {
      count_s++;
    } else if (isalpha(ch)) { // check if the character is a letter
      count_c++;
    }
  }

  cout << "Vowels: " << count_v << endl;
  cout << "Consonants: " << count_c << endl;
  cout << "Spaces: " << count_s << endl;
  cout << endl;
}

int main() {
  string str;
  getline(cin, str);
  int length = str.length();
  solve(str, length);
  return 0;
}
