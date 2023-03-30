#include <iostream>
#include <vector>
using namespace std;

vector<int> read_numbers(int n, int m, vector<int> a) {
    vector<int> order;
    int i = 1;
    while (i <= n) {
        if (find(a.begin(), a.end(), i) == a.end()) {
            order.push_back(i);
            i++;
        } else {
            int j = i;
            while (find(a.begin(), a.end(), j) != a.end()) {
                j++;
            }
            for (int k = j - 1; k >= i; k--) {
                order.push_back(k);
            }
            i = j;
        }
    }
    return order;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    vector<int> order = read_numbers(n, m, a);
    for (int i = 0; i < n; i++) {
        cout << order[i] << endl;
    }
    return 0;
}
