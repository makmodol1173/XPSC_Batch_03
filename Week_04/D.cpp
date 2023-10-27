#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        priority_queue<long long> pq;
        pq.push(v[n - 1]);
        for (long long i = n - 2; i >= 0; i--)
        {
            if (pq.top() >= v[i])
            {
                long long x = pq.top() ^ v[i];
                pq.pop();
                pq.push(x);
            }
            else
                pq.push(v[i]);
        }
        cout << pq.size() << endl;
    }
    return 0;
}