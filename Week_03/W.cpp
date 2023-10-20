#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        int res = -1;
        if (a > b)
        {
            swap(a, b);
        }
        if (a == b)
        {
            res = 0;
        }
        else
        {
            int diff = b - a;
            if (diff >= x)
                res = 1;
            else if (x + b <= r || (x + l <= b && x + l <= a))
                res = 2;
            else if ((x + l <= b && x + l <= r && x + a <= r))
                res = 3;
            else
                res = -1;
        }
        cout << res << endl;
    }
    return 0;
}
