#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int c = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) == 0)
            {
                sum -= v[j];
            }
            else
            {
                sum += v[j];
            }
        }
        if (sum % 360 == 0)
        {
            c = 1;
            break;
        }
    }
    if (c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}