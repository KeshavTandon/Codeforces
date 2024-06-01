#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<int>ans;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            ans.push_back(0);
            n /= 2;
        }
        else
        {
            if (n % 4 == 1)
            {
                ans.push_back(1);
                n = (n - 1) / 2;
            }
            else
            {
                ans.push_back(-1);
                n = (n + 1) / 2;
            }
        }
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
