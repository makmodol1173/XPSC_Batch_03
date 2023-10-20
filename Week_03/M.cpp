#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<int> v1(n);
        for (int i = 0; i < n; i++) {
            v1[a[i].second] = b[i];
        }
        for (auto x : v1) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
