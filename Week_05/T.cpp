#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n;
        vector<int> v;

        for (int i = 0; i < k; i++) {
            m = max(n, 0);
            v.push_back(m);
            n -= (i + 1);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                v[i] = i + 1;
            }
            if (v[i] >= v[i + 1]) {
                v[i + 1] = i + 2;
            }
        }
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}