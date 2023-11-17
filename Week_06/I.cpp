#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        map<char, int> mp;
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            res += s[i] - 'a' + 1;
        }
        for (char ch = 'z'; ch >= 'a'; ch--)
        {
            while (mp[ch] && res > x)
            {
                res -= ch - 'a' + 1;
                mp[ch]--;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] != 0)
            {
                cout << s[i];
                mp[s[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}