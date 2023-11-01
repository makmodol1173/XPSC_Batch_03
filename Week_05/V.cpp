#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
        map<int, set<char>> m;
        for (int i = 0; i < n; i++) {
            m[v[i]].insert(s[i]);
        }
        int c = 1;
        for (auto x : m) {
            if (x.second.size() > 1) {
                c = 0;
                break;
            }
        }
        if (c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
