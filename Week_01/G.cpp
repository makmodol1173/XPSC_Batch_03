#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=0;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            res=i;
            break;
        }
        else res=-1;
    }
    cout<<res<<endl;
    return 0;
}