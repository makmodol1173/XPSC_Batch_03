#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 1;
        string s;
        for (int i = 9; i >= 1; i--) {
            if (n >= i) {
                s += to_string(i);
                n -= i;
            }
        }
        if (n > 0) {
            cout << -1 << endl;
        } else {
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}
