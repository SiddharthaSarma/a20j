// https://codeforces.com/contest/266/problem/A
// 266/A Stones on the Table

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  string s;
  cin >> s;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) c++;
  }
  cout << c << endl;
  return 0;
}
