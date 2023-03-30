#include <bits/stdc++.h>
using namespace std;

int minimum_moves(int n, int m, int d, vector<int> &permutation, vector<int> &array) {
    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
        pos[permutation[i]] = i;
    }
    int moves = 0;
    for (int i = 1; i < m; i++) {
        int distance = pos[array[i]] - pos[array[i - 1]];
        if (distance <= d) {
            moves = max(moves, (d - distance + 1) / d);
        }
    }
    return moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> permutation(n), array(m);
        for (int i = 0; i < n; i++) {
            cin >> permutation[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> array[i];
        }
        cout << minimum_moves(n, m, d, permutation, array) << endl;
    }
    return 0;
}
