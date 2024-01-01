#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, f = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            if (i != 1 && i != 2 && i != 4 && i != 8 && i != 16)
            {
                f = 1;
            }
        }
    }
    if(f==1) cout << "NO" << endl;
    else cout << "YES" << endl;
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
