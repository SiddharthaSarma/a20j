// https://codeforces.com/contest/443/problem/A
// 443 A.Anton and Letters

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  string ss = s.substr(1, s.size() - 2);
  map<char, int> m;
  for (char c: ss) {
    if (c != ' ' && c != ',') {
      m[c]++;
    }
  }
  cout << (int) m.size() << endl;
  return 0;
}
