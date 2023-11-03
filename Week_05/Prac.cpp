// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n, m, a, r, c;
//     cin >> n >> m >> a;
//     r = n / a;
//     if (n % a != 0)
//         r++;
//     c = m / a;
//     if (m % a != 0)
//         c++;
//     cout << c * r << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int n, x = 0;
//     cin >> n;    
//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;
//         if (s[1] == '+') {
//             x = x + 1;
//         } else {
//             x = x - 1;
//         }
//     }
//     cout << x << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int c=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]>=v[k-1] && v[i]>0)
//         {
//             c++;
//         }
//     }
//     cout<<c<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     if(x%5==0)
//     {
//         cout<<x/5;
//     }
//     else{
//         cout<<(x/5)+1;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     int c=0;
//     sort(s.begin(),s.end());
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]!=s[i+1])
//         {
//             c++;
//         }
//     }
//     if(c%2==0)
//         {
//             cout<<"CHAT WITH HER!"<<endl;
//         }
//         else{
//             cout<<"IGNORE HIM!"<<endl;
//         }
//     return 0;
// }


