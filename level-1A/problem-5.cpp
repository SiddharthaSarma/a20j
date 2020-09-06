// https://codeforces.com/contest/677/problem/A
// vanya and fence problem

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  int w = 0;
  int k;
  for (int i = 0; i < n; i++) {
    cin >> k;
    if (k > h) {
      w += 2;
    } else {
      w += 1;
    }
  }
  cout << w << endl;
  return 0;
}
