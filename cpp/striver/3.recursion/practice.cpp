#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "race a car";
  string clean;
  bool isPalindrone = true;
  for (char c : s) {
    if (isalnum(c)) {
      clean += tolower(c);
    }
  }
  int start = 0, end = clean.length() - 1;
  while (start <= end) {
    if (clean[start] != clean[end]) {
      isPalindrone = false;
      break;
    }

    start++;
    end--;
  }

  if (isPalindrone) {
    cout << "isPalindrone";
  } else {
    cout << "isnotPalindrone";
  }

  return 0;
}
