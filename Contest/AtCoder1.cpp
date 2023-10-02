#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            d = i + 1;
            c++;
        }
    }
    cout<<c;
    // if (c == 0)
    // {
    //     cout << 0 << endl;
    // }
    // else
    // {
    //     cout << d;
    // }

    return 0;
}