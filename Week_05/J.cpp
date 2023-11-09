#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;    
    while(t--){
        long long n,w,l = 1,r=0;
        cin>>n>>w;
        vector < long long > v(n);
        for(long long i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        r = 1e10;
        while(l < r-1) { 
            long long tt = 0;
            long long mid = l+(r-l)/2;
            for(long long i = 0 ; i < n ; i++) {
                if(v[i] < mid) {
                    tt+=(mid-v[i]);
                }
            }
            if(tt > w) {
                r=mid;
            }
            else {
                l=mid;
            }
        }
        cout<<l<<endl;
    }  
    return 0;
}