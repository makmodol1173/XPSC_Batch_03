#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<bool> v1(n + 1, true);
    vector<int> v2(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (v1[i]) {
            for (int j = i; j <= n; j += i) {
                v1[j] = false;
                v2[j]++;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (v2[i] == 2) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
