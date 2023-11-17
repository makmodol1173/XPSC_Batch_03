#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.size();
        long long c = 0, x = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c = i + 1;
            }
        }
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                x = i + 1;
                break;
            }
        }
        if (c == 0 && x == 0)
        {
            cout << n << endl;
        }
        else if (c == 0)
        {
            cout << x << endl;
        }
        else if (x == 0)
        {
            cout << n - c + 1 << endl;
        }
        else
        {
            cout << abs(c - x) + 1 << endl;
        }
    }
    return 0;
}