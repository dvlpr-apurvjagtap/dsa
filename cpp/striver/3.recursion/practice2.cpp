#include <bits/stdtr1c++.h>
using namespace std;
int main() {
  int n = 7;
  int a = 0, b = 1;
  for (int i = 2; i <= n; i++) {
    int c = a + b;
    a = b;
    b = c;
  }
  cout << b;
  return 0;
}