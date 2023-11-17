#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(y % x == 0) 
        cout<<"1 "<<y/x;
        else cout<<"0 0";
        cout<<endl;

    }
    return 0;
}