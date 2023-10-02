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
        int r=0,t=0;
        for(int i=0;i<3;i++)
        {
            r=r+s[i];
        }
        for(int j=3;j<6;j++)
        {
            t=t+s[j];
        }
        if(r==t)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }   
    return 0;
}