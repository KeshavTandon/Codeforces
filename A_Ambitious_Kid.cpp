#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = INT_MAX;
    sort(v.begin(), v.end());
    if (v[0] == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            ans = min(ans, -(v[i]));
        }
        if (v[i] > 0)
        {
            ans = min(ans, v[i]);
        }
        if(v[i]==0)
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << ans << endl;
}
int main()
{
    solve();
}
