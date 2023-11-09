#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) 
        cin >> x;
        sort(a.begin(), a.end());
        int l = 0, h = 1e9;
        while (l <= h) {
            int mid = (l + h) >> 1;
            int cnt = 1, L = a[0] - mid, R = a[0] + mid;
            for (int i = 1; i < n; i++) {
                int l = a[i] - mid, r = a[i] + mid;
                if (l <= R) L = l;
                else {
                    cnt++;
                    if (cnt == 4) 
                    break;
                    L = l, 
                    R = r;
                }
            }
            if (cnt == 4) l = mid + 1;
            else h = mid - 1;
        }
        cout << l << endl;
    }
    return 0;
}
