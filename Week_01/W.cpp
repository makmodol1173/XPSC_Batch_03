#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;
    int l = 0;
    while(x <= y) {
        x*=2;
        l++;
    }
    cout << l << endl;
    return 0;
}
