// https://codeforces.com/contest/431/problem/A
// 431/A Black Square

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  int a[4];
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  ll i;
  cin >> i;
  ll sum = 0;
  while(i) {
    sum += a [(i % 10) - 1];
    i /= 10;
  }
  cout << sum << endl;
  return 0;
}
