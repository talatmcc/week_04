#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> e_cap(n);
        vector<int> p(m);
        for (int i = 0; i < n; i++)
        {
            cin >> e_cap[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> p[i];
        }
        sort(e_cap.begin(), e_cap.end(), greater<int>());
        sort(p.begin(), p.end(), greater<int>());

        long long ans = 0;

        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(1ll*e_cap[i], (1ll*p[i] * h));
        }

        cout << ans << endl;
    }
    return 0;
}