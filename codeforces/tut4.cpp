#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string x;
    cin >> x;
    int k;
    cin >> k;
    int n = x.length();
    int count = 0;
    if (k >= n) {
      cout << 0 << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      if (x[i] != '0' && count < k) {
        x.erase(x.begin() + i);
        count++;
      }
    }
    while (x.length() > 1 && x[0] == '0' && count < k) {
      x.erase(x.begin());
      count++;
    }
    if (x.length() == 1 && x[0] == '0') {
      cout << 0 << endl;
    } else {
      cout << x << endl;
    }
  }
  return 0;
}
