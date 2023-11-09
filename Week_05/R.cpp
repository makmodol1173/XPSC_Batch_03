#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;        
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int h, m;
            cin >> h >> m;
            mp[h * 60 + m]++;
        }        
        int t = 0;
        while (!mp[(a * 60 + b + t) % (24 * 60)]) t++;
        t %= 24 * 60;
        cout << t / 60 << " " << t % 60 << endl;
    }
    return 0;
}
