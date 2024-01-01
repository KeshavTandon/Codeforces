#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b==1)
    {
        cout << "NO" << endl;
        return;
    }
    else if(b==2)
    {
        cout << "YES" << endl;
        cout << a*b << " " << a << " "<< 3*a << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        cout << a << " " << (b - 1) * a << " " << a * b << endl;
        return;
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
