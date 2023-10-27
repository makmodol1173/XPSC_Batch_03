#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (mp.count(a) == 0)
            {
                mp[a].first = i;
                mp[a].second = i;
            }
            else
            {
                mp[a].second = i;
            }
        }
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            if (!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}