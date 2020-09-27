// http://codeforces.com/problemset/problem/767/A
// 767 A.Snacktower

#include <bits/stdc++.h>

using namespace std;
const int N = 100020;
int a[N] = {0};

int main() {
  int n;
  cin >> n;
  int m = n;
  while (n--) {
    int p;
    cin >> p;
    a[p] = 1;
    while (a[m] == 1) {
      cout << m << " ";
      m--;
    }
    cout << "\n"; 
  }
}

