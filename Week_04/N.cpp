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
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());
        int r = 0;
        for (int i = 0; i < n / 2; i++)
        {
            r += (v[n - 1 - i] - v[i]);
        }
        cout << r << endl;
    }
    return 0;
}