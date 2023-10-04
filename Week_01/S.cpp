#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int op = 0;
        int val = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > val) {
                int dif = a[i] - val;
                op += dif;
                val = a[i];
            }
            val++;
        }
        cout << op << endl;
    }
    return 0;
}
