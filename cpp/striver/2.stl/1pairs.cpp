#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> p = {1, 3};
  cout << p.second << endl;
  pair<int, pair<int, int>> o = {1, {3, 7}}; // nested pair
  cout << o.second.first << endl;
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[2].second << endl;
}
