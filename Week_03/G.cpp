#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int mx = s - r;
        cout << mx << " ";
        n--;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            v[i] = 1;
        }
        r = r - n;
        int idx = 0;
        for (int i = 0; i < r; i++)
        {
            if (v[idx] != mx)
            {
                v[idx]++;
            }
            else
            {
                idx++;
                v[idx]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
