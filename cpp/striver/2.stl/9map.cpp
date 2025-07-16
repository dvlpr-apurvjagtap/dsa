#include <bits/stdc++.h>

using namespace std;
int main() {
  map<int, string> mp;
  mp.insert({1, "rahul"});
  mp.insert({2, "samir"});
  mp.insert({3, "samir"});
  mp.insert({4, "yash"});

  cout << mp[1];
  cout << mp[2];
  for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
  }

  map<pair<int, int>, int> m;
  m[{2, 3}] = 10;

  return 0;
}