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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        if ((v.size() - mp.size()) % 2 == 0)
            cout << mp.size() << endl;
        else
            cout << mp.size() - 1 << endl;
    }
    return 0;
}