// https://codeforces.com/contest/686/problem/A
// 686/A. Free Ice Cream

#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;
  char c;
  long long v;
  long long r = 0;
  while (n--) {
    cin >> c >> v;
    if (c == '+') {
      m += v;
    } else {
      if (m >= v) {
        m -= v;
      } else {
        r++;
      }
    }
  }
  cout << m << " " << r << endl;
  return 0;
}
