#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    if(a>b)
    {
        cout<<"0"<<endl;
    }
    else{
        for(int i=a;i<=b;i++)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}