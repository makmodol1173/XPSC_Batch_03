// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<string> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     sort(v.begin(), v.end(), [&](string x, string y)
//          { return x.size() < y.size(); });
//     int c = 1;
//     for (int i = 0; i < n - 1; i++)
//     {
//         string s = v[i + 1];
//         int p = s.find(v[i]);
//         if (p == -1)
//         {
//             c = 0;
//             break;
//         }
//     }
//     if (c)
//     {
//         cout << "YES" << endl;
//         for (auto c : v)
//         {
//             cout << c << endl;
//         }
//         cout << endl;
//     }
//     else
//         cout << "nO" << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int a[101];
// int main()
// {
//     int n, k;
// 	cin >> n >> k;
// 	vector<int>v;

// 	for (int i = 1; i <= n; i++) {
// 		int x; cin >> x;

// 		if (!a[x])
//         v.push_back(i);
// 		a[x]++;
// 	}
// 	if (v.size() < k)cout << "nO" <<endl;
// 	else {
// 		cout << "YES" <<endl;
// 		for (int i = 0; i < k; i++)
//         cout << v[i] << " ";
// 	}
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int p;
//         int c = 0;
//         if (s[0] == '0')
//         {
//             c += 9;
//             p = 10;
//         }
//         else
//         {
//             c += (s[0] - '0' - 1);
//             p = s[0] - '0';
//         }
//         for (int i = 1; i < 4; i++)
//         {
//             if (s[i] == '0')
//             {
//                 c += abs(10 - p);
//                 p = 10;
//             }
//             else
//             {
//                 c += abs(s[i] - '0' - p);
//                 p = s[i] - '0';
//             }
//         }
//         cout << c + 4 << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += v[i];
//         }
//         if (sum % n != 0) {
//             cout << "no" << endl;
//         } else {
//             int res = sum / n;
//             int c=1;
//             for (int i = 0; i < n; i++) {
//                 if (A[i] > res) {
//                     int d = A[i] - res;
//                     if (d % 2 != 0) {
//                         c=0;
//                         break;
//                     }
//                 }
//             }
//             if (c) {
//                 cout << "Yes" << endl;
//             } else {
//                 cout << "no" << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n % 2 == 0 && n > 2)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     map<string,int>mp;
//     int m = 0;
//     string s1;
//     for(int i=0;i<n;i++){ 
//         string s2;cin>>s2;
//         mp[s2]++;
//         if(mp[s2]>m){
//             m=mp[s2];
//             s1=s2;
//         }
//     }
//     cout<<s1<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         if(s.size()>10)
//         {
//             cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
//         }
//         else{
//             cout<<s<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}