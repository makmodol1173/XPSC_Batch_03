#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int v[n];
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        int c = 0;
        sort(v, v + n);
        for (int i = 0; i < n; i++) {
            int val = v[i];
            if (m[v[i]] != 0) {
                c++;
                while (m[val] > 0) {
                    m[val]--;
                    val++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
