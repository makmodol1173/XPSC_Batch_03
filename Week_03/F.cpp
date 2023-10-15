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
        string pi="3141592653589793238462643383279";
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==pi[i]) c++;
            else
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}