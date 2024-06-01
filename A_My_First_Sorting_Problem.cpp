#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int x, y;
    cin >> x >> y;
    cout << min(x,y) << " ";
    cout << max(x,y) << endl;

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
