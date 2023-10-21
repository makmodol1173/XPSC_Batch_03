#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long tmp,e=0,o=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>tmp;
            if(tmp%2==0){
                e++;
                sum+=tmp;
            }
            else{
                o++;
                sum += tmp;
            }
        }
        while(q--){
            int m,x;
            cin>>m>>x;
            if(m==1){
                sum+=o*x;
                if(x&1){
                    e+=o;
                    o=0;
                }
            }
            else{
                sum+=(e*x);
                if(x&1){
                    o+=e;
                    e=0;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}