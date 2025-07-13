#include <bits/stdc++.h>
using namespace std;
int main() {
  deque<int> dq;
  dq.push_back(2);
  dq.emplace_back(3);

  for (auto it : dq) {
    cout << it << endl;
  }
  return 0;
}