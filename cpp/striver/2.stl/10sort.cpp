#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;
  if (p1.first > p2.first)
    return true;
  return false;
}
int main() {
  int a[5] = {2, 1, 0, 3, 4};
  sort(a, a + 5, greater<int>());
  for (int i = 0; i < 5; i++) {
    cout << a[i] << endl;
  }

  vector<int> v = {9, 4, 5, 6, 3, 2, 1};
  sort(v.begin(), v.end(), greater<int>());
  for (auto it : v) {
    cout << it << endl;
  }

  pair<int, int> ar[] = {{1, 2}, {2, 1}, {4, 1}};
  sort(ar, ar + 3, comp);
  for (int i = 0; i < 3; i++) {
    cout << ar[i].first << " " << ar[i].second << endl;
  }

  int num = 7;
  int cnt = __builtin_popcount(num); // find set bits in number
  cout << cnt << endl;
  int arr[] = {1, 2, 3, 4, 5, 6};
  int m = *max_element(arr, arr + 6); // find max element in a list
  cout << m;
  return 0;
}