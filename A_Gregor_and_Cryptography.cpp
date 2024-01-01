#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int p;
    cin >> p;
    if (p % 2 == 0)
        cout << 2 << " " << p << endl;
    else
        cout << 2 << " " << p - 1 << endl;
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
