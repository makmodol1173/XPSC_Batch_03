#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        string s;
        cin>>n>>s;
        string s1="MEOW";
        for(int i=0;i<n;i++)
        {
            s[i]=toupper(s[i]);
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s==s1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}