#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;   
    vector<int> v(n);    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }   
    cin >> m;    
    while (m--) {
        int i, j;
        cin >> i >> j;        
        long long c = 0;
        for (int k = i; k <= j; k++) {
            c += v[k];
        }        
        cout << c << endl;
    }    
    return 0;
}
