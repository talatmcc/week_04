#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        ll sum = 0;
        vector<ll> a(n), b(2);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            b[a[i] % 2]++; // if a[i] is even then b[0] will get incremented //////if a[i] is odd then b[1] will get incremented
        }

        while(q--)
        {
            int x, y;
            cin >> x >> y;
            sum += y * b[x];
            if (y % 2 == 1)
            {
                b[1 - x] += b[x];
                b[x] = 0;
            }
            cout << sum << "\n";
        }
    }
    return 0;
}