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
        vector<string> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        int mn = INT_MAX;
        sort(vc.begin(), vc.end());
        for (int i = 0; i < vc.size(); i++)
        {
            for (int j = i + 1; j < vc.size(); j++)
            {
                int s = 0;
                for (int k = 0; k < m; k++)
                {
                    s += abs(vc[i][k] - vc[j][k]);
                }
                mn = min(mn, s);
            }
        }
        cout << mn << endl;
    }
    return 0;
}