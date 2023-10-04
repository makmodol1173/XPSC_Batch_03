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
        string s[3][n];
        int cnt[3];
        for (int i = 0; i < 3; i++)
             cnt[i] = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mp[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 3) cnt[i] += 0;
                else if (mp[s[i][j]] == 2) cnt[i] += 1;
                else if (mp[s[i][j]] == 1) cnt[i] += 3;
            }
        }
        for (int i = 0; i < 3; i++)
            cout << cnt[i] << " ";
        cout << endl;
    }
    return 0;
}