#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mtx[n + 5][n];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                cin >> mtx[i][j];
            }
        }
        map<int, int> mp, m;
        for (int i = 1; i <= n; i++) {
            mp[mtx[i][n - 1]] = i;
            m[mtx[i][n - 1]]++;
        }
        int idx = 0, val;
        for (auto u : m) {
            if (u.second == 1) {
                idx = u.first;
            } else {
                val = u.first;
            }
        }
        for (int i = 1; i < n; i++) {
            cout << mtx[mp[idx]][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}
