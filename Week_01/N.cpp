#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string r="";
    for(int i=0;i<s.length();i=i+2)
    {
        r=r+s[i];
    }
    cout<<r<<endl;
    return 0;
}