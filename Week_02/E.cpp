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
        char s[2][n];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                cin >> s[i][j];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                if (s[i][j] == 'B')
                    s[i][j] = 'G';

        int c = 0;
        for (int j = 0; j < n; j++)
            if (s[0][j] != s[1][j])
            {
                c = 1;
                break;
            }
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}