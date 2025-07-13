#include <bits/stdc++.h>
using namespace std;
int main() {
  list<int> ls; // creating list
  ls.push_back(2);
  ls.emplace_back(3);

  ls.push_front(5);
  ls.emplace_front(1);

  for (auto it : ls) {
    cout << it << endl;
  }

  list<int>::iterator it = ls.begin();
  advance(it, 2);
  cout << *(it) << endl;

  ls.pop_back();
  for (auto it : ls) {
    cout << it << endl;
  }

  return 0;
}