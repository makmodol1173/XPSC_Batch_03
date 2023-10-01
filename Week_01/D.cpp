#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    res=max(res,a+(a-1));
    res=max(res,b+(b-1));
    res=max(res,a+b);
    cout<<res<<endl;
    return 0;
}
