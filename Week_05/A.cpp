#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int c = 1;
    while (true) {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0) {
            break;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << c++ << ":" << endl;
        for (int i = 0; i < q; i++) {
            int qr;
            cin >> qr;
            auto it = find(v.begin(), v.end(), qr);
            if (it != v.end()) {
                cout << qr << " found at " << distance(v.begin(), it) + 1 << endl;
            } else {
                cout << qr << " not found" << endl;
            }
        }
    }
    return 0;
}
