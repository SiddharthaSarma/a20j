#include <bits/stdc++.h>

using namespace std;

void lower(string& s) {
  transform(s.begin(), s.end(), s.begin(), ::tolower);
}

int main() {
  string a;
  string b;
  cin >> a >> b;
  lower(a);
  lower(b);
  int res = a.compare(b);
  if (res < 0) {
    cout << "-1" << endl;
  } else if (res > 0) {
    cout << "1" << endl;
  } else {
    cout << "0" << endl;
  }
  return 0;
}
