#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans=v[0]*v[n-1];
    vector<ll>compare;
    for(ll i=2;i<=sqrt(ans);i++)
    {
        if(ans%i==0)
        {
            compare.push_back(i);
            if(i!=ans/i)
            compare.push_back(ans/i);
        }
    }
    sort(compare.begin(),compare.end());
    if(v==compare)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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
