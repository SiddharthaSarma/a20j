// https://codeforces.com/contest/770/problem/A
// 770/A.New Password

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s = "abcdefghijklmnopqrstuvwxyz";
  string s2 = "";
  for (int i = 0; i < n; i++) {
    s2 += s[i % k];
  }
  cout << s2 << endl;
  return 0;
}
