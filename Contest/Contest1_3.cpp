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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        int c = 0;
        for (auto i : mp)
        {
            if (i.second >= 3)
            {
                cout << i.first << endl;
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            cout << "-1" << endl;
        }
        
    }
    return 0;
}