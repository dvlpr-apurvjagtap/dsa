#include <bits/stdc++.h>
using namespace std;
int main() {
  queue<int> q;
  q.push(2);
  q.push(3);
  q.push(4);

  cout << q.front() << endl;
  cout << q.back() << endl;

  q.pop();
  cout << q.front() << endl;
  cout << q.back() << endl;
  return 0;
}