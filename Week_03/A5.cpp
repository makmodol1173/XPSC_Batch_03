#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long r = 1;
        while (k--)
        {
            r = ((r % mod) * (n % mod)) % mod;
        }
        cout << r << endl;
    }
    return 0;
}