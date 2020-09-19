// https://codeforces.com/contest/490/problem/A
// 490/A. Team Olympiad

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, vector<int>> m;
  for (int i = 1; i <= 3; i++) {
    m[i].empty();
  }
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    m[temp].push_back(i);
  }
  int mc = INT_MAX;
  for (auto i: m) {
    mc = min(mc, (int)i.second.size());
  }
  cout << mc << endl;
  for (int i = 0; i < mc; i++) {
    for (auto v: m) {
      cout << v.second[i] + 1 << " ";
    }
    cout << "\n";
  }
  return 0;
}
