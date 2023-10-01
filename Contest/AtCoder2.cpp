#include<bits/stdc++.h>
using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool suffix = true, prefix = true;

        for(int i = 0; i < min(n, m); i++) {
            if(s[i] != t[i]) {
                prefix = false;
                break;
            }
        }
        for(int i = 0; i < min(n, m); i++) {
            if(s[n - 1 - i] != t[m - 1 - i]) {
                suffix = false;
                break;
            }
        }
        if(suffix && prefix)
            cout << 0 << endl;
        else if(prefix)
            cout << 1 << endl;
        else if(suffix)
            cout << 2 << endl;
        else
            cout << 3 << endl;
}