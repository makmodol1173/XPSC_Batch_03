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
        set<string> st;
        for (int i = 0; i < n - 1; i++)
        {
            string s1 = "";
            s1 += s[i];
            s1 += s[i + 1];
            st.insert(s1);
        }
        cout << st.size() << endl;
    }
    return 0;
}
