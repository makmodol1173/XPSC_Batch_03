#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long sum = 0;
        for (auto it = v.begin(); it != v.end(); it++) {
            sum += *it;
        }
        sort(v.begin(), v.end());
        long long mod = sum % n;
        if (sum < v.size() || (mod != 0 && k == 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}