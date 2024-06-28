#include <bits/stdc++.h>
using namespace std;
void solve1()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    int var = 2, var2 = 3;
    while (var <= n)
    {
        sum1 += var;
        var += 2;
    }
    while (var2 <= n)
    {
        sum2 += var2;
        var2 += 3;
    }
    if (sum1 > sum2)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ans = 0;
    map<long long, int> mapper;
    // for storing the sum
    long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        mapper[a[i]]++;

        sum += a[i];

        if (sum % 2 == 0 && mapper[sum / 2] > 0)
        {
            ans++;
        }
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

    return 0;
}
