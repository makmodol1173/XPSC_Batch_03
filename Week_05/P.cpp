#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, i, j, val;
    string a;
    cin>>t;    
    while(t--)
    {
        cin>>n;
        cin>>a;
        string b="";        
        for(i=n-1; i>=0;)
        {
            if(a[i]=='0'){
                val=(a[i-2]-48)*10+a[i-1]-48;
                i-=3;
            }else{
                val=a[i]-48;
                i--;
            }
            b+=char(val+97-1);
        }
        reverse(b.begin(), b.end());
        cout<<b<<endl;        
    }
    return 0;
}