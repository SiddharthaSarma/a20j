// https://codeforces.com/contest/799/problem/A
// 799 A. Carrot Juice

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t, k, d;
  cin >> n >> t >> k >> d;

  if ((n - 1) / k * t > d) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
