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
        string s;
        cin>>s;
        set<char>s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(s[i]);
        }
        int x=s.size()-s1.size();
        int r=s1.size()*2+x*1;
        cout<<r<<endl;
    }
    return 0;
}