#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    int t=a;
    while (t<=c+0.5) {
        cnt=cnt+b;
        t=t+a;
    }
    cout<<cnt<<endl;
    return 0;
}
