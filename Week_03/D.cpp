#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> v;
        vector<long long> v1(n + 1, 0);
        long long sum = 0, mn = 0;
        for (long long i = 0; i < n; i++) {
            long long x = i;
            long long y = n - 1 - i;
            if (s[i] == 'L') {
                if (y > x) {
                    mn++;
                    sum += y;
                    v.push_back(y - x);
                } else {
                    sum += x;
                }
            } else {
                if (x > y) {
                    mn++;
                    sum += x;
                    v.push_back(x - y);
                } else {
                    sum += y;
                }
            }
        }
        for (long long i = mn; i <= n; i++) {
            v1[i] = sum;
        }
        sort(v.begin(), v.end(), greater<long long>());
        for (long long i = mn - 1; i >= 1; i--) {
            sum -= v.back();
            v.pop_back();
            v1[i] = sum;
        }
        for (long long i = 1; i <= n; i++) {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
