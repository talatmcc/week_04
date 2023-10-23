#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string s;
        cin >> s;

        map<int, char> mp;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 0  && mp[a[i]] != s[i])
            {
                ok = false;
                break;
            }
            else if (mp[a[i]] < 1)
            {
                mp[a[i]] = s[i];
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}