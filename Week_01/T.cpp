#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    long long sum = 0; 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        int s = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                s = min(s, v[i]);
            }
        }
        cout << sum - s << endl;
    }
    return 0;
}
