#include <bits/stdc++.h>
using namespace std;
int solve(){
    int m,s;
    cin>>m>>s;
    vector<int> v(100+1,0);
    int res=0;
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        res=max(res,tmp);
        v[tmp]=1;
    }
    for(int i=res;i<=100;i++){
        int sum=(i*(i+1))/2;
        int c=0;
        for(int j=1;j<=i;j++){
            if(v[j]==1){
                sum-=j;
                c++;
            }
        }
        if(sum==s && c==m){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}