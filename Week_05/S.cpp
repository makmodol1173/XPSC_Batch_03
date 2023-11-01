#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];        
        set<int> s;
        for (int i = n - 1; i >= 0; i--) {
            if (s.count(a[i])) {
                cout << i + 1 << endl;
                break;
            }
            else {
                s.insert(a[i]);
            }
            if (i == 0) {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
