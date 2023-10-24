#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
            sum += abs(x);
        }
        int ans = 0;
        int c = 0;
        for (auto x : v)
        {
            if (x == 0 && c == 0)
            {
                continue;
            }
            if (x <= 0)
            {
                c++;
            }
            else
            {
                if (c > 0)
                {
                    ans++;
                }
                c = 0;
            }
        }
        if (c)
        {
            ans++;
        }
        cout << sum << " " << ans << endl;
    }
    return 0;
}