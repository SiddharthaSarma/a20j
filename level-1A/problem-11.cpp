// https://codeforces.com/problemset/problem/69/A
// 69A Young Scientist

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x, y, z;
  int xsum = 0, ysum = 0, zsum = 0;
  while(n--) {
    cin >> x >> y >> z;
    xsum += x;
    ysum += y;
    zsum += z;
  }
  if (xsum == 0 && ysum == 0 && zsum == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  } 
  return 0;
}
