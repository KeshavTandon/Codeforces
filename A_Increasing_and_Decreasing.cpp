#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> ans(n);
    ans[0] = x;
    ans[n - 1] = y;
    int k = 1;
    for (int i = n - 2; i > 0; i--)
    {
        ans[i] = ans[i + 1] - k;
        k++;
    }
    if ((ans[1] - ans[0]) > (ans[2] - ans[1]))
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
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
