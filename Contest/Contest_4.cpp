// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         if(a<=b)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"nO"<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         long long a,b,s;
//         cin>>a>>b;
//         s=a*b;
//         if(s>=10000 && s<=99999)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"nO"<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         if(a==b || abs(a-b)%2==0)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"nO"<<endl;
//         }
//     }
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
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         for(int i=0;i<n;i++) cin>>a[i];
//         int And=-1;
//         for(int i=0;i<n;i++)
//         if((a[i]&k)==k)
//         {
//             And &=a[i];
//         }
//         if(And==k) cout<<"YES"<<endl;
//         else cout<<"nO"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v1(n);
//         vector<int> v2(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v1[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> v2[i];
//         }
//         int maxv1 = 0, maxv2 = 0;
//         int currentv1 = 0, currentv2 = 0;
//         for (int i = 0; i < n; i++) {
//             if (v1[i] > 0) {
//                 currentv1++;
//                 maxv1 = max(maxv1, currentv1);
//             } else {
//                 currentv1 = 0;
//             }
//             if (v2[i] > 0) {
//                 currentv2++;
//                 maxv2 = max(maxv2, currentv2);
//             } else {
//                 currentv2 = 0;
//             }
//         }
//         if (maxv1 > maxv2) {
//             cout << "OM" << endl;
//         } else if (maxv2 > maxv1) {
//             cout << "ADDY" << endl;
//         } else {
//             cout << "DRAW" << endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b && a>c)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"nO"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;cin>>t;
// 	while(t--)
// 	{
// 	    int n,x,d;
//         cin>>n>>x>>d;
// 	    int s=5*x;
// 	    int s1=n/s;
// 	    cout<<d+s1<<endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int x = 1;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long x = 1;
//         for (int i = n; i > n - 2; i--)
//         {
//             x *= i;            
//         }
//         cout << x << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         int c = 0;
//         for (int i = 0; i <= n - k; i++) {
//             int res_or = 0;
//             for (int j = i; j < i + k; j++) {
//                 res_or |= v[j];
//             }
//             if (res_or % 2 == 1) {
//                 c++;
//             }
//         }
//         cout << c << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         int c = 0;
//         int res_or = 0;
//         for (int i = 0; i < k; i++) {
//             res_or |= v[i];
//         }
//         if (res_or % 2 == 1) {
//             c++;
//         }
//         for (int i = k; i < n; i++) {
//             res_or ^= v[i - k];
//             res_or |= v[i];
//             if (res_or % 2 == 1) {
//                 c++;
//             }
//         }    
//         cout << c << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// const int maxn = 1000001;
// vector<int> dp(maxn, -1);
// int solve(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     if (dp[n] != -1) {
//         return dp[n];
//     }
//     int c = 0;
//     for (int p = 3; p <= n; p += 2) {
//         if (n % p == 0) {
//             int res = solve(n - p);
//             if (res == 0) {
//                 c = 1;
//                 break;
//             }
//         }
//     }
//     return dp[n] = c;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         if (n % 2 == 0) {
//             cout << "Bob" << endl;
//         } else {
//             if (solve(n) == 1) {
//                 cout << "Alice" << endl;
//             } else {
//                 cout << "Bob" << endl;
//             }
//         }
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

//         if (n % 2 == 0) {
//             cout << "Bob" << endl;
//         } else if (n == 1 || (n & (n - 1)) == 0) {
//             cout << "Bob" << endl;
//         } else {
//             cout << "Alice" << endl;
//         }
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll a[], ll k, ll n) {
    ll o, t;
    o= t = 0;
    for (ll i = 0; i < k; i++)
        if (a[i] & 1) o++;
    if (o>0) t++;
    for (ll i = k; i < n; i++) {
        if (a[i - k] & 1) o--;
        if (a[i] & 1) o++;
        if (o> 0) t++;
    }

    return t;
}
int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll k, n;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        cout <<solve(a, k, n) << endl;
    }
    return 0;
}