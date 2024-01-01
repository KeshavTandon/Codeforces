#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll d;
    cin >> d;
    ll a,b;
    for(ll i=1+d; ;i++)
    {
        ll count=0;
        for(ll j=2;j<=sqrt(i);j++)
        {
            if(i%j==0) count++;
        }
        if(count==0) {
            a=i;
            break;
        }
    }
    for (ll i = a + d;; i++)
    {
        ll count = 0;
        for (ll j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
        {
            b = i;
            break;
        }
    }
    cout << min(a*b,a*a*a) << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
