#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        if(s2[0]=='a'&& s2.size()>1) cout<<"-1";
        else if(s2[0]=='a') cout<<"1";
        else{
            long long x=1;
            for(int i=1;i<=s1.size();i++)
            {
                x*=2;
            }
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}