// codeforces.com/contest/263/problem/A
// Beautiful Matrix
#include <bits/stdc++.h>

using namespace std;

int main() {
  int temp;
  int count = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> temp;
      if (temp == 1) {
        cout << (abs(3 - (i + 1)) + abs(3 - (j + 1))) << endl;
        break;
      }
    }
  }
  return 0;
}