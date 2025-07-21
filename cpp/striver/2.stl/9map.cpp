#include <bits/stdc++.h>

using namespace std;
int main() {
  vector<map<string, string>> ls = {
      {
          {"id", "one"},
          {"name", "samir"},
          {"age", "24"},
          {"college", "amrutvahini"},
      },
      {
          {"id", "two"},
          {"name", "suraj"},
          {"age", "24"},
          {"college", "amrutvahini"},
      },
      {
          {"id", "three"},
          {"name", "rahul"},
          {"age", "24"},
          {"college", "amrutvahini"},
      },
  };

  // list<map<string, string>>::iterator it = ls.begin();
  for (auto m : ls) {
    cout << m["id"] << endl;
    cout << m["name"] << endl;
  }

  map<string, string> mp = {{"id", "one"},
                            {"name", "samir"},
                            {"age", "24"},
                            {"college", "amrutvahini"}};

  // map<int, string> mp;
  // mp.insert({1, "rahul"});
  // mp.insert({2, "samir"});
  // mp.insert({3, "samir"});
  // mp.insert({4, "yash"});

  cout << mp["id"] << endl;
  cout << mp["name"];
  // for (auto it : mp) {
  //   cout << it.first << " " << it.second << endl;
  // }

  map<pair<int, int>, int> m;
  m[{2, 3}] = 10;

  return 0;
}