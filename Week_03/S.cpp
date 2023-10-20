#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;   
    while (t--) {
        int n, k;
        cin >> n >> k;       
        string s;
        cin >> s;        
        map<char, int> frq;        
        for (auto c : s) {
            frq[c]++;
        }
        int r = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            int m = min(frq[c], frq[c - 32]);
            r += m;
            frq[c] -= m;
            frq[c - 32] -= m;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            int a = max(frq[c], frq[c - 32]);
            int m = min(k, a / 2);
            r = r + m;
            k = k - m;
        }
        cout << r << endl;
    }
    return 0;
}
