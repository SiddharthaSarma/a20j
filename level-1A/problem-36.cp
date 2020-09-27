// http://codeforces.com/contest/520/problem/A
// 520 A.Pangram

#include<bits/stdc++.h>

typedef long long int ll; 

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  string s;
  cin >> s;
  map<char, int> m;
  for (char c: s) {
    if (!m.count(tolower(c))) {
      count++;
    } 
    m[tolower(c)]++;
  }
  if (count == 26) { 
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

