// https://codeforces.com/contest/339/problem/A
// 339/A. Helpful Maths

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v;
  for (char c: s) {
    if (c != '+') {
      int val = (int) c;
      v.push_back(val - 48);
    }
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < (int) v.size() - 1; i++) {
    cout << v[i] << "+";
  }
  cout << v[v.size() - 1] << endl;
  return 0;
}
