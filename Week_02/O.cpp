#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int m;
    cin>>n>>m;
    int cnt=0;
    while(n>0)
    {
        n/=m;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}