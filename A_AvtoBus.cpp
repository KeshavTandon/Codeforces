#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll mini, maxi;
    if (n & 1 || n < 4)
    {
        cout << "-1" << endl;
        return;
    }
    if (n==4 || n==6)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    if(n%6==0)
    {
        mini=n/6;
    }
    else if(n%6==4)
    {
        mini=1+(n-4)/6;
    }
    else if(n%6==2){
        mini=2+(n-8)/6;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
    if(n%4==0)
    {
        maxi=n/4;
    }
    else{
        maxi=1+(n-6)/4;
    }
    cout << mini << " " << maxi << endl;
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
