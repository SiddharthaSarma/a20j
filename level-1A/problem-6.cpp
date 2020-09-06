// https://codeforces.com/contest/734/problem/A
// Anton and Danik
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int a = 0;
  int d = 0;
  string s;
  cin >> n >> s;
  for (char c: s) {
    if (c == 'A') {
      a++;
    } else {
      d++;
    }
  }
  if (a > d) {
    cout << "Anton" << endl;
  } else if (a < d) {
    cout << "Danik" << endl;
  } else {
    cout << "Friendship" << endl;
  }
  return 0;
}
