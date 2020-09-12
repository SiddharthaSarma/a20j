// https://codeforces.com/contest/732/problem/A
// 732 A. Buy a Shovel

#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;
  int c = 1;
  while(c) {
   if ((k * c) % 10 == 0 || (k * c) % 10 == r) {
     break;
   }
   c++;
  }
  cout << c << endl;
  return 0;
}
