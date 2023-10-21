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
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            int k;
            string s;
            cin >> k >> s;
            for (auto c : s)
            {
                if (c == 'U')
                {
                    v[i]--;
                    if (v[i] == -1)
                    {
                        v[i] = 9;
                    }
                }
                else
                {
                    v[i]++;
                    if (v[i] == 10)
                        v[i] = 0;
                }
            }
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}