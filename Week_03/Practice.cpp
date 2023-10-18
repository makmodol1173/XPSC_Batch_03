// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int x = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             x = x ^ a;
//         }
//         if (n % 2 == 0)
//         {
//             if (x == 0)
//             {
//                 cout << 0 << endl;
//             }
//             else{
//                 cout << -1 << endl;
//             }
//         }
//         else
//         {
//             cout << x << endl;
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// const long long mod = 1e9 + 7;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, k;
//         cin >> n >> k;
//         long long r = 1;
//         while (k--)
//         {
//             r = ((r % mod) * (n % mod)) % mod;
//         }
//         cout << r << endl;
//     }
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
//         int n;
//         cin >> n;
//         int c = 0;
//         while (n > 1)
//         {
//             n >>= 1;
//             c++;
//         }
//         int p = 1 << c;
//         cout << p - 1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i + 1] == 1 && a[i - 1] == 1)
        {
            c++;
            a[i + 1] = 0;
            
        }
    }
    cout << c << endl;

    return 0;
}