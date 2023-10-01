#include <bits/stdc++.h>
using namespace std;
long long fact(int n) {
    if (n == 0) return 1;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
long long cal(vector<int>& v) {
    int n = v.size();
    long long pos = 0;
    vector<bool> v1(n, false);

    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 1; j < v[i]; j++) {
            if (!v1[j - 1]) {
                c++;
            }
        }
        pos += c * fact(n - i - 1);
        v1[v[i] - 1] = true;
    }
    return pos + 1;
}
int main() {
    int n;
    cin >> n;    
    vector<int> p(n), q(n);    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }   
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }    
    long long a = cal(p);
    long long b = cal(q);    
    long long res = abs(a - b);    
    cout << res << endl;    
    return 0;
}
