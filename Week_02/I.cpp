#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (true) {
        n++;
        set<int> s;
        int tmp = n;
        int c=1;
        while (tmp > 0) {
            int r = tmp % 10;
            if (s.count(r) > 0) {
                c=0;
                break;
            }
            s.insert(r);
            tmp /= 10;
        }
        if (c==1) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}