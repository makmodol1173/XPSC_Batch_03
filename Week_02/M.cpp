#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;    
    vector<int> v(n);    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }    
    vector<int> v1(1001, 0);    
    for (int i = 0; i < n; i++) {
        for (int j = 2; j <= v[i]; j++) {
            if (v[i] % j == 0) {
                v1[j]++;
                while (v[i] % j == 0) {
                    v[i] /= j;
                }
            }
        }
    }    
    int gcd = 0;
    int r = 2;    
    for (int i = 2; i <= 1000; i++) {
        if (v1[i] > gcd) {
            gcd = v1[i];
            r = i;
        }
    }    
    cout << r << endl;    
    return 0;
}
