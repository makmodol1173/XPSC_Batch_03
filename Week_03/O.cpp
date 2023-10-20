#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 1;
        for (int i = 2; i < n; i++)
        {
            if (s[i] != s[i - 2])
            {
                c++;
            }
        }
        cout << c << endl;
    }
return 0;
}