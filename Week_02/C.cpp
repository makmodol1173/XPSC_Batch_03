#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int mn= INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        long long r=0;
        for(int i=0;i<n;i++)
        {
            r+=(a[i]-mn);
        }
        cout<<r<<endl; 
    }
    return 0;
}