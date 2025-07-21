#include <bits/stdc++.h>
using namespace std;
void f(int i, int n) {
  if (i > n)
    return;
  f(i + 1, n);
  cout << i << endl;
}

void rev(int n) {
  if (n == 0)
    return;
  rev(n - 1);
  cout << n << endl;
}
int main() {
  f(1, 5);
  rev(5);
  return 0;
}
