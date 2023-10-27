#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    long long a[m + 1];
    for (int i = 0; i <= m; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    long long r = 0;    
    for (int i = 0; i < m; i++) {
        r = a[i] ^ a[m];
        int c = 0;
        while (r != 0) {
            r = r & (r - 1);
            c++;
        }        
        if (c <= k) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
