#include <bits/stdc++.h>
using namespace std;
const int N=1e9+7;
int main() {
    int n, k;
    cin >> n >> k;
    long long res = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                int T_gcd = __gcd(__gcd(a, b), c);
                res = (res + T_gcd)%N;
            }
        }
    }
    cout << res << endl;
    return 0;
}
