#include <bits/stdc++.h>
using namespace std;
int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(30);
  pq.push(50);
  pq.push(20);

  cout << pq.top();

  priority_queue<int, vector<int>, greater<int>> pq2;
  pq2.push(2);
  pq2.push(5);
  pq2.push(7);
  pq2.push(8);
  pq2.push(9);
  cout << pq2.top();
  return 0;
}