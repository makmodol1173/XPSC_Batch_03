#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;   
    int cnt = 0;    
    while (n.size()>1)
    {
        int s=0;        
        for (char d : n)
        {
            s+=d-'0';
        }        
        n=to_string(s);      
        cnt++;
    }    
    cout<<cnt<<endl; 
    return 0;
}
