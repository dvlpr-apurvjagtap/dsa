#include <bits/stdc++.h>
using namespace std;
void f(int i, int arr[], int n) {
  if (i >= n / 2)
    return;
  swap(arr[i], arr[n - i - 1]);
  f(i + 1, arr, n);
}

bool p(int i, string &s) {
  if (i >= (s.size() / 2))
    return true;
  if (s[i] != s[s.size() - i - 1])
    return false;
  p(i + 1, s);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  f(0, arr, 5);
  for (int i = 0; i <= 4; i++) {
    cout << arr[i] << endl;
  }
  string s = "madam";

  cout << p(0, s);
  return 0;
}