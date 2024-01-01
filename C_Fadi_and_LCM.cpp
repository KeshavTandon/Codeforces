#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lcmm(ll a, ll b)
{
    return a * b / __gcd(a, b);
}
void solve()
{
    ll x;
    cin >> x;
    ll maxi = -1e18;
    ll mini = 1e18;
    pair<ll, ll> ans={1,x};
    for (ll i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            ll number1 = i;
            ll number2 = x / i;
            if (lcmm(number1, number2) == x)
            {
                maxi = max(number1, number2);
                if (mini > maxi)
                {
                    ans = {number1, number2};
                    mini = min(mini, maxi);
                }
            }
        }
    }

    cout << ans.first << " " << ans.second << endl;
}
int main()
{
    solve();
}
