#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000005;

int main() {
    int t;
    cin >> t;

    vector<bool> isPrime(MAX_SIZE, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAX_SIZE; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_SIZE; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> v;
        int c1 = 0;
        int c2 = 0;
        int num = 2;
        while (v.size() < n) {
            if (isPrime[num]) {
                int o = num;
                int r = 0;
                int tmp = num;
                while (tmp > 0) {
                    r = r * 10 + tmp % 10;
                    tmp /= 10;
                }
                if (o == r) {
                    v.push_back(num);
                    if (to_string(num).length() % 2 == 0) {
                        c1++;
                    } else {
                        c2++;
                    }
                }
            }
            num++;
        }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
