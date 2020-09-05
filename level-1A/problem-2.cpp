#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  string res = "";
  if (n & 1) {
    int t = n - 1;
    while (t - 2 > 0) {
      t -= 2;
      count++;
      res += "2 ";
    }
    count++;
    res += "3";
    
  } else {
    while (n) {
      n -= 2;
      count++;
      res += "2 ";
    }
  }
  cout << count << endl;
  cout << res << endl;
  return 0;
}
