#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll>arr(5,0);
    vector<ll>brr(5,0);
    for (ll i = 1; i <= n; i++)
    {
        arr[i % 5]++;
    }
    for (ll i = 1; i <= m; i++)
    {
        brr[i % 5]++;
    }
    ll ans=0;
    ans+=(arr[0]*brr[0]); // all combinations
    ans+=(arr[1]*brr[4]);
    ans+=(arr[2]*brr[3]);
    ans+=(arr[3]*brr[2]);
    ans+=(arr[4]*brr[1]);
    cout << ans << endl;
}
int main()
{
    solve();
}
