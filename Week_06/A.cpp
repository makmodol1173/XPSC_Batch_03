#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1[n+3],a2[n+4];
        for(int i=0;i<n;i++)
        cin>>a1[i];
        for(int i=0;i<n;i++)
        cin>>a2[i];
        int mx=0;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a1[i]<a2[i])
            ans=1;
            else
            {
                if(a2[i]==0)
                {
                    mx=max(mx,a1[i]);
                }
                else
                {
                    int d=a1[i]-a2[i];
                    mp[d]++;
                }
            }
        }
        int x=-1;
        for(auto it:mp)
        {
            x = it.first;
        }
        if(mp.size()>1 || x!=-1 && mx>x)ans=1;
        if(ans==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
    }
    return 0;
}