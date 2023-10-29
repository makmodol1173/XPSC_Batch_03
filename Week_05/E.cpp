#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll n, s;
    cin >> n >> s;
    ll ans = 0;
    ll l = 1, h = n;
    while (l <= h) {
        ll mid = (l + h) / 2;
        ll tmp = mid;
        int sum = 0;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (mid - sum >= s) {
            ans = max(ans, n - mid + 1);
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
