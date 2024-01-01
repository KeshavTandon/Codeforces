#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>ans(n);
    int k=0;
    for(int i=0;i<n;i++) cin>>ans[i];
    for(int i=0;i<n;i++)
    {
        int dis=abs(ans[i]-i-1);
        k=__gcd(k,dis);
    }
    cout << k << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
