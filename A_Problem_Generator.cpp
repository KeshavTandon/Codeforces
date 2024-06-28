#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    string test = "ABCDEFG";
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < test.size(); i++)
    {
        if (mp.find(test[i]) == mp.end())
            mp[test[i]] = 0;
    }

    int ans = 0;
    while (m != 0)
    {
        for (auto &it : mp)
        {
            if (it.second == 0)
            {
                ans++;
            }
            else if (it.second >= 1)
            {
                it.second--;
            }
        }
        m--;
    }
    cout << ans << endl;
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
