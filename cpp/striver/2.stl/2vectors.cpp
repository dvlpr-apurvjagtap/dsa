#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v;     // intialize vector
  v.push_back(1);    // add element in vecor
  v.emplace_back(2); // extend space of vector and addd element
  v.push_back(3);
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;

  vector<pair<int, int>> vec;
  vec.emplace_back(5, 6); // this is take directly as vector
  vec.push_back({7, 8});  // you have to tell its vector
  cout << vec[1].first << endl;

  vector<int> q(5); // creates a vector with 5 size
  cout << v[3] << endl;

  vector<int> w(5, 100); // crate vector of size 5 and add every element 100
  cout << w[4] << endl;

  vector<int> e(3, 20);
  vector<int> r(e); // copy vector to another vector
  cout << r[0] << endl;

  vector<int>::iterator it =
      v.begin(); // v.begin is pointing towards memory where v vector is stored
  cout << *(it) << " " << endl;
  it += 2;
  cout << *(it) << " " << endl;

  vector<int>::iterator as = w.end();
  cout << *(as) << endl;

  vector<int>::iterator fg = w.end(); // it refer to end + 1 element
  cout << *(fg - 1) << endl;          // so we have to (end + 1) -1

  cout << v.back(); // end of the elem(collection)

  for (vector<int>::iterator jk = w.begin(); jk != w.end(); jk++) {
    cout << *(jk) << endl;
  }

  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << endl;
  }

  for (auto it : v) {
    cout << it << endl;
  }

  w.erase(w.begin() + 1);

  for (auto it : w) {
    cout << it << endl;
  }

  vector<int> t(2, 200);
  t.insert(t.begin(), 300); // inser element at beginning
  cout << t[0] << endl;
  t.insert(t.begin() + 1, 2, 10); // inset emelemet at index 1
  cout << t[1] << endl;

  vector<int> y(2, 50);
  t.insert(t.begin(), y.begin(), y.end());
  for (auto it : t) {
    cout << it << endl;
  }

  w.pop_back();
  v.swap(w);
  cout << v[0] << endl;
  v.clear();
  cout << v.empty();

  return 0;
}