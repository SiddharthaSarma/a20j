// http://codeforces.com/contest/768/problem/A
// 768 A.Oath of the Night's Watch 

#include<bits/stdc++.h>

typedef long long int ll; 

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int c = 0;
  for (int i = 1; i < n - 1; i++) {
    if (a[i] > a[0] && a[i] < a[n-1]) c++;
  }
  cout << c << endl; 
  return 0;
}

