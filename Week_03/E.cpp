#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int d = 0;
                for (int k = 0; k < 2; k++) {
                    if (v[i][k] != v[j][k]) {
                        d++;
                    }
                }
                if (d == 1) {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
