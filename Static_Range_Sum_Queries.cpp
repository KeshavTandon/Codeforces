#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    vector<ll>pref(n+1,0);
    pref[0]=0;
    for(ll i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+v[i];
    }
    // for(ll i=0;i<=n;i++) cout << pref[i] << " ";
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        cout << pref[b]-pref[a-1] << endl; 
    }
}
int main()
{
        solve();
}
