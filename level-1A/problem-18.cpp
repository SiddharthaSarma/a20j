// https://codeforces.com/contest/268/problem/A
// 268 A.Games

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n), a(n);
  for(int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (h[i] == a[j]) sum++;
      if (h[j] == a[i]) sum++;
    }
  }

  cout << sum << endl;
  return 0;
}


// Other approach

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  vector<int> h(n), a(n);
  for(int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
    for (int j = 0; j < i; ++j) {
      if (h[i] == a[j]) sum++;
      if (h[j] == a[i]) sum++;
    }
  }

  cout << sum << endl;
  return 0;
}
