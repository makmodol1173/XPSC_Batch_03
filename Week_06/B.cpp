#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++) {
            cin>>v1[i];
        }
        for (int i = 0; i < n; i++) {
            cin>>v2[i];
        }
        vector<int> vc(n);
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (v1[i] >= c) {
                vc[i] = v2[i] - v1[i];
            } else {
                vc[i] = v2[i] - c;
            }
            c = v2[i];
        }
        for (int i = 0; i < n; i++) {
            cout<<vc[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
