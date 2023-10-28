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
        int x=1;
        int ans = n-x;
        while(x<=n){
            ans = min(ans,n-x);
            x *= 10;
        }
        cout<<ans<<endl;

    }

    return 0;
}