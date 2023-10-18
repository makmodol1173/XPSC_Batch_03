#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[4];
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
        }
        int mn = min(min(a[0], a[1]), min(a[2], a[3]));
        int mx = max(max(a[0], a[1]), max(a[2], a[3]));
        if ((mn == a[0] && mx == a[3]) || (mn == a[3] && mx == a[0]) || (mn == a[1] && mx == a[2]) || (mn == a[2] && mx == a[1])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
