#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, o = 0, e = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                e++;
            else
                o++;
        }
        if (e == n || o == n)
        {
            cout << "YES" <<endl;
        }
        else
        {
            int mn = *min_element(v.begin(), v.end());
            if (mn % 2 == 1)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
    }
    return 0;
}