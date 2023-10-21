#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
       long long n;
       cin>>n;
       vector<string> v(n);
       map<char,int> mp,mv;
       map<string,int> s;
       for(int i=0;i<n;i++) 
       {
           cin>>v[i];
       }
       long long ans=0;
       for(int i=0;i<n;i++)
       {
           ans+=(mp[v[i][0]]+mv[v[i][1]] - 2*s[v[i]]);
           mp[v[i][0]]++;
           mv[v[i][1]]++;
           s[v[i]]++;
       }
       cout<<ans<<endl;
    }
    return 0;
}

