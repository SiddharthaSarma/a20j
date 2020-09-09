// https://codeforces.com/contest/431/problem/A
// 431/A Black Square

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a[4];
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  string s;
  cin >> s;
  int sum = 0;
  for (char c: s) {
    int t = c - '0' - 1;
    sum += a[t];
  }
  cout << sum << endl;
  return 0;
}
