#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<string, int>mp;
    string s="";
    for(int i=v.size()-1;i>=0;i--)
    {
        string st=v[i];
        if(mp.find(st) != mp.end()) continue;
        else{
            s+=st[st.size()-2];
            s+=st[st.size()-1];
            mp[st]++;
        }
    }
    cout<<s<<endl;
    return 0;
}