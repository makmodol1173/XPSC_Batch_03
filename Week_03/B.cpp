#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int Tsum = 0;
                Tsum += v[i][j];
                int x = i - 1;
                int y = j - 1;
                while (x >= 0 && y >= 0) {
                    Tsum += v[x][y];
                    x--;
                    y--;
                }
                x = i - 1;
                y = j + 1;
                while (x >= 0 && y < m) {
                    Tsum += v[x][y];
                    x--;
                    y++;
                }
                x = i + 1;
                y = j - 1;
                while (x < n && y >= 0) {
                    Tsum += v[x][y];
                    x++;
                    y--;
                }
                x = i + 1;
                y = j + 1;
                while (x < n && y < m) {
                    Tsum += v[x][y];
                    x++;
                    y++;
                }
                mx = max(mx, Tsum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
