#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n;
        cin >> n;
        string s1, s2;
        long long hr = (a[0] - '0') * 10 + (a[1] - '0');
        long long mn = (a[3] - '0') * 10 + (a[4] - '0');

        long long p = hr, q = mn, cnt = 0;
        while (1)
        {
            mn += n;
            hr += (mn / 60);
            mn %= 60;
            hr %= 24;
            long long u, v, w, x;
            u = hr % 10;
            w = (mn / 10) % 10;
            v = (hr / 10) % 10;
            x = mn % 10;
            if (u == w && v == x)
                cnt++;
            if (hr == p && mn == q)
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}