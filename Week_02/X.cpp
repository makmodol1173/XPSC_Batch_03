#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int x = -1, y = -1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == '#' && i > 0 && j > 0 && i < 7 && j < 7 )
                {
                    if (a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#')
                    {
                        x = i + 1;
                        y = j + 1;
                    }
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}