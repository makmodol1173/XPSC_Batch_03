#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;                  
    cin>>t;
    while(t--){
        int n;              
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        } 
        int ans=n; 
        long long s=0; 
        for(int i=0;i<n;i++){
            s+=v[i];
            long long sum=0;
            int l=0,mxl=i+1;
            int c=0;
            for(int j=i+1;j<n;j++){
                if(sum+v[j]>s){
                    break;
                }
                if(j==n-1 && sum+v[j]==s){
                    mxl=max(mxl,l+1);
                    c=1;
                    break;
                }
                sum+=v[j];
                l++;
                if(sum==s){
                    mxl=max(mxl,l);
                    l=0;
                    sum=0;
                }
            }
            if(c){
                ans=min(ans,mxl);
            }
        } 
        cout<<ans<<endl;
    }
    return 0;
}