// http://codeforces.com/contest/160/problem/A
// 160 A.Twins
#include <bits/stdc++.h>

using namespace std; 

int main() {
  int n;
  int sum = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a, a + n);
  int count = 0;
  int temp = 0;
  while (n) {
    temp += a[--n];
    if (temp > sum - temp) {
      count++;
      break;
    } else {
      count++;
    }
  }
  cout << count << endl; 
  return 0;
}
