#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  int max_bits = 0;
  for (int num : nums) {
    max_bits = max(max_bits, 31 - __builtin_clz(num));
  }

  vector<int> bit_count(max_bits + 1);
  for (int num : nums) {
    for (int i = 0; i <= max_bits; i++) {
      if ((num >> i) & 1) {
        bit_count[i]++;
      }
    }
  }

  int result = 0;
  for (int i = max_bits; i >= 0; i--) {
    if (bit_count[i] >= k) {
      result |= (1 << i);
      bit_count[i] -= k;
    }
  }

  cout << result << endl;

  return 0;
}