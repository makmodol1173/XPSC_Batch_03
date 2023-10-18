#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v1(n);
        set<string> st;
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            st.insert(v1[i]);
        }
        vector<int> v2;
        for (int i = 0; i < n; i++) {
            int c=0;
            for (int j = 1; j < v1[i].size(); j++) {
                string p = v1[i].substr(0, j);
                if (st.find(p) != st.end()) {
                    string s = v1[i].substr(j);
                    if (st.find(s) != st.end()) {
                        c=1;
                        break;
                    }
                }
            }
            v2.push_back(c ? 1 : 0);
        }
        for (int x : v2) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
