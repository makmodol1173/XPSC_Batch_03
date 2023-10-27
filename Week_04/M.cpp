#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        vector<int>v1(n),v2(m);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());

        long long r=0;
        for(int i=0;i<min(n,m);i++)
        {
            r+=min(1ll*v2[i]*x, 1ll*v1[i]);
        }
        cout<<r<<endl;
    }
    return 0;
}