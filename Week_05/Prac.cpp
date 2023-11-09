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
//     int n,t;
//     cin>>n>>t;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int c=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]>=v[t-1] && v[i]>0)
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
//             cout<<"IGnORE HIM!"<<endl;
//         }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t; cin>>t;
//     while(t--)
//     {
//         int n; cin>>n;
// 	    if (t == n) {
// 		for (int i = 1; i <= n; i++) {
// 			cout << i << ' ';
// 		}
// 		cout << endl;
// 	}
// 	else {
// 		for (int i = 1; i <= t; i++) {
// 			cout << i << ' ';
// 		}
// 		for (int i = t + 2; i <= n; i++) {
// 			cout << i << ' ';
// 		}
// 		cout << t + 1 << endl;
// 	}
//     }
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        set<int> s;
        int res = 0;        
        for (int i = n - 1; i >= 0; i--) {
            if (s.count(a[i])) {
                res = i + 1;
                break;
            }
            s.insert(a[i]);
        }
        cout << res << endl;
    }
    return 0;
}
