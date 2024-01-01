#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll p;
    cin >> p;
    if(p%2!=0) cout << "YES" << endl;
    else{
        for(int i=2;i<=sqrt(p);i++)
        {
            if((p%2!=0) && (p%i==0))
            {
                cout << "YES" << endl;
                break;
            }
        }
        cout << "NO" << endl;
    }
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
