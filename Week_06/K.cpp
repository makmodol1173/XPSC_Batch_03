#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long x=a+b+(a*b);
    if(x==111) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}