// https://codeforces.com/contest/228/problem/A
// 228 A. Is your horseshoe on the other hoof

#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, int> m;
  int n;
  for (int i = 0; i < 4; i++) {
    cin >> n;
    m[n]++;
  }
  cout << 4 - (int) m.size() << endl;
  return 0;
}
