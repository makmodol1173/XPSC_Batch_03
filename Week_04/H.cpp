#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        if (ch == 'g') {
            cout << 0 << endl;
            continue;
        }
        int f = -1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') {
                f = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == ch) {
                int cnt = 0, c = 0;
                for (int j = i + 1; j < n; j++) {
                    cnt++;
                    if (s[j] == 'g') {
                        c++;
                        break;
                    }
                }
                i = i + cnt;
                if (c) {
                    ans = max(ans, cnt);
                } else {
                    ans = max(ans, cnt + 1 + f);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}