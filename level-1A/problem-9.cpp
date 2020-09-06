// https://codeforces.com/contest/405/problem/A
// Gravity Flip
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i: a) {
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}