#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int q;
        cin >> q;
        int c1 = -1;
        int c2 = -1;
        auto it_c2 = upper_bound(v.begin(), v.end(), q);
        if (it_c2 != v.end()) {
            c2 = *it_c2;
        }
        auto it_c1 = lower_bound(v.begin(), v.end(), q);
        if (it_c1 != v.begin()) {
            --it_c1;
            c1 = *it_c1;
        }
        if (c1 == -1) {
            cout << "X ";
        } else {
            cout << c1 << " ";
        }
        if (c2 == -1) {
            cout << "X" << endl;
        } else {
            cout << c2 << endl;
        }
    }
    return 0;
}
