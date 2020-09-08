// https://codeforces.com/contest/427/problem/A
// 427/A Police Recruits

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  int temp;
  int k = 0;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp < c && c == 0) {
      k++;
    } else {
      c += temp;
    }
  }
  cout << k << endl;
  return 0;
}
