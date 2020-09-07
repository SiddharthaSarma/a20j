// https://codeforces.com/contest/344/problem/A
// 344A. Magnets
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s = "";
  string t;
  while (n--) {
    cin >> t;
    s += t;
  }
  int count = 1;
  for (int i = 1; i < s.size(); i+= 2) {
    if (s[i] == s[i+1]) count++;
  }
  cout << count << endl;
  return 0;
}
