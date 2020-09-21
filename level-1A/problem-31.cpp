// http://codeforces.com/contest/136/problem/A
// 136 A.Presents

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int a[n];
  int temp;
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    a[temp - 1] = i;
  }
  for (int n: a) {
    cout << n << " ";
  }
  cout << endl;
  return 0;
}
