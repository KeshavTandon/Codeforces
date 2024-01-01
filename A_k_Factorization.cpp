#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>ans;
    for(ll i=2;i<=sqrt(n);i++)
    {
        while((n%i)==0){
            ans.push_back(i);
            n/=i;
        }
    }
    if(n!=1) ans.push_back(n);
    // for(ll i=0;i<ans.size();i++)cout << ans[i] << " ";
    if(ans.size()<k){
        cout << -1 << endl;
        return;
    }
    for(ll i=0;i<k-1;i++)
    {
        cout << ans[i] << " ";
    }
    ll pro=1;
    for(ll i=k-1;i<ans.size();i++)
    {
        pro*=ans[i];
    }
    cout << pro << endl;
}
int main()
{
    solve();
}
