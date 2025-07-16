#include <bits/stdc++.h>

using namespace std;
int main() {
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);

  //   set<int>::iterator it = s.find(2);
  auto it = s.find(2);
  cout << *(it) << endl; // you have to use iterator to access element in set
  cout << *(s.find(3)) << endl;

  multiset<int> ms; // sorted but not unique
  ms.insert(1);
  ms.insert(2);
  //   ms.insert(2);
  ms.insert(1);
  for (auto ir : ms) {
    cout << ir << endl;
  }

  unordered_set<int> us; // unique not sorted
  us.insert(4);
  us.insert(5);
  us.insert(6);
  us.insert(7);

  for (auto ur : us) {
    cout << ur << endl;
  }
  return 0;
}