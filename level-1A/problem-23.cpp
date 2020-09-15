// http://codeforces.com/contest/709/problem/A
// 709/A. Juicer

#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, b, d;
  cin >> n >> b >> d;
  int o;
  int s = 0;
  int c = 0;
  while (n--) {
    cin >> o;
    if (o <= b) {
      s += o;
    }
    if (s > d) {
      c++;
      s = 0;
    }
  }
  cout << c << endl;
  return 0;
}
