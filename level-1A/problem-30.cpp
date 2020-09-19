// https://codeforces.com/contest/770/problem/A
// 770/A.New Password

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  for (char i = 'a', j = 0; j < k; j++) {
    cout << i;
    i++;
  }
  for (char i = 'a', j = 0; j < n - k; j++) {
    cout << i;
  }
  cout << endl;
  return 0;
}
