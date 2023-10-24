#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == c)
            {
                cout << 0 << endl;
            }
        }
        else
        {
            s += s;
            int ans = 0, cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == c)
                {
                    cnt = 0;
                    while (s[i] != 'g' && i < s.size())
                    {
                        cnt++;
                        i++;
                    }
                    ans = max( ans, cnt);
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}