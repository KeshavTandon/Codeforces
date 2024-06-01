/*
This Code is written by: FadyyOsama287
✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟✟
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long double

int main()
{
    IOS
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1);
        vector<ll> b(k + 1);
        a[0] = 0;
        b[0] = 0;
        for (ll i = 1; i <= k; ++i)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= k; ++i)
        {
            cin >> b[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            ll f = upper_bound(a.begin(), a.end(), x) - a.begin();
            f--;
            if (a[f] == x)
            {
                cout << b[f] << endl;
                continue;
            }
            x -= a[f];
            ll ans = b[f];
            ans += x / ((a[f + 1] - a[f]) / (b[f + 1] - b[f]));
            cout << (long long)ans << endl;
        }
    }
}