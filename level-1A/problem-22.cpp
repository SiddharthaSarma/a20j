// https://codeforces.com/contest/294/problem/A
// 294 A.Shaass and Oskols

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int t;
  cin >> t;
  int m, i;
  while (t--) {
    cin >> m >> i;
    int count = a[m - 1];
    int left = i - 1;
    int right = count - i;
    if (m - 2 > -1) {
      a[m - 2] += left;
    }
    if (m < n) {
      a[m] += right;
    }
    a[m - 1] = 0;
  }
  for (int n: a) {
    cout << n << endl;
  }
  return 0;
}
