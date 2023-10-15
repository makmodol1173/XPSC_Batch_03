#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    string s1="";
    int n=s.size();
    for(int i=0;i<100;i++)
    {
        s1+="Yes";
    }
    bool b=false;
    for(int i=0;i<s1.size();i++)
    {
        if(n+i<s1.size() && s1.substr(i,n)==s){
            b=true;
            break;
        }
    }
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    return 0;
}