#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long mn = INT_MAX;
        vector<long long> v(n + 1, 0);
        for (long long i = 0; i < n; i++)
            v[i + 1] = v[i] + (s[i] == 'W');
        for (long long i = k; i <= n; i++)
            mn = min(mn, v[i] - v[i - k]);
        cout << mn << endl;
    }
    return 0;
}
