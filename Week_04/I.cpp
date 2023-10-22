#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll r = 0;
        vector<ll> v;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            while (x % 2 == 0)
            {
                r++;
                x /= 2;
            }
            ll c = i;
            ll tmp = 0;
            while (c % 2 == 0)
            {
                tmp++;
                c /= 2;
            }
            v.push_back(tmp);
        }
        sort(v.rbegin(), v.rend());
        if (r >= n)
            cout << 0 << endl;
        else
        {
            ll ans = 0;
            for (int i = 0; i < v.size(); i++)
            {
                r += v[i];
                ans++;
                if (r >= n)
                {
                    cout << ans << endl;
                    break;
                }
            }
            if (r < n)
                cout << -1 << endl;
        }
    }
}