// https://codeforces.com/contest/59/problem/A
// Words
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 0;
  for (char c: s) {
   if (c >= 'A' && c <= 'Z') count++;
  }
  int length = (int) s.size();
  if (count > (length / 2)) {
    transform(s.begin(), s.end(), s.begin(), ::toupper); 
  } else {
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
  }
  cout << s << endl;
  return 0;
}
