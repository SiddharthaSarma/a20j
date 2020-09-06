// codeforces.com/contest/231/problem/A
// Codeforces Team problem
#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  cin >> n;
  int c = 0, a[3];
  for (int i = 0; i < n; i++) {
    int temp = 0;
    for (int j = 0; j < 3; j++) {
	    cin >> a[j];
	    temp += a[j];
    }
    if (temp >= 2) c++;
  }
  cout << c << endl;
  return 0;
}
