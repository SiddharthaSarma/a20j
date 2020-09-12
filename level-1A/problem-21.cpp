// https://codeforces.com/contest/265/problem/A
// 265 A. Colorful Stones (Simplified Edition)

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  string t;
  cin >> s >> t;
  int i = 0;
  for (char c: t) {
    if (c == s[i]) {
      i++;
    }
  }
  cout << i + 1 << endl;
  return 0;
}
