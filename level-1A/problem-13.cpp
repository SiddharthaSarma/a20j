// https://codeforces.com/contest/381/problem/A
// 381/A Sereja and Dima

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  deque<int> a;
  int sum = 0;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    a.push_back(temp);
  }
  int seraja = 0;
  int dima = 0;
  int k = 1;
  while(a.size()) {
    if (a.front() > a.back()) {
      if (k & 1) {
        seraja += a.front();
      } else {
        dima += a.front();
      }
      a.pop_front();
    } else {
      if (k & 1) {
        seraja += a.back();
      } else {
        dima += a.back();
      }
      a.pop_back();
    }
    k++;
  }
  cout << seraja << " " << dima << endl;
  return 0;
}
