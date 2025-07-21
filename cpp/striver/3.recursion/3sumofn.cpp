#include <bits/stdc++.h>
using namespace std;
// void n(int i, int sum) {
//   if (i < 0) {
//     cout << sum << endl;
//     return;
//   }
//   n(i - 1, sum + i);
// }

// int sum = 0;
// void f(int n) {
//   if (n < 0) {
//     cout << sum;
//     return;
//   }
//   sum += n;
//   f(n - 1);
// }

int fact(int n) {
  if (n == 0)
    return 1;
  return (n * (fact(n - 1)));
}
int g(int n) {
  if (n == 0)
    return 0;
  return (n + (g(n - 1)));
}

int main() {
  //   n(4, 0);
  //   f(5);
  cout << fact(5);
  return 0;
}