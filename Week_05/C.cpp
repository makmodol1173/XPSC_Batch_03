#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l = 1;
        int r = v[n - 1] - v[0];
        int res = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int cnt = 1;
            int l_pos = v[0];
            for (int i = 1; i < n; i++) {
                if (v[i] - l_pos >= mid) {
                    cnt++;
                    l_pos = v[i];
                }
            }
            if (cnt >= c) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
