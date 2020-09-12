// http://codeforces.com/contest/731/problem/A
// A. Night at the Museum
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  char x = 'a';
  int sum = 0;
  for (char c: s) {
    int cw = x - c;
    int ccw = c - x;
    cw = cw < 0 ? 26 + cw : cw;
    ccw = ccw < 0 ? 26 + ccw : ccw;
    int test = min(cw, ccw);
    sum += test;
    x = c;
  }
  cout << abs(sum) << endl; 
  return 0;
}
