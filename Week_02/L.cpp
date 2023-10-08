#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;    
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<long long> v1 = v;
    sort(v1.begin(), v1.end());
    vector<long long> p1(n + 1, 0);
    vector<long long> p2(n + 1, 0);
    for (int i = 0; i < n; i++) {
        p1[i + 1] = p1[i] + v[i];
        p2[i + 1] = p2[i] + v1[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << p1[r] - p1[l - 1] << endl;
        } else {
            cout << p2[r] - p2[l - 1] << endl;
        }
    }
    return 0;
}
