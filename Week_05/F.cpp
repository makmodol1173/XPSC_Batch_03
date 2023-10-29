#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        map<int, int> mp;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            for (int j = 2; j * j <= v[i]; j++) {
                while (v[i] % j == 0) {
                    v[i] = v[i] / j;
                    mp[j]++;
                }
            }

            if (v[i] > 1) {
                mp[v[i]]++;
            }
        }
        int c = 1;
        for (auto it : mp) {
            if (it.second % n != 0) {
                c = 0;
            }
        }
        if (c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
