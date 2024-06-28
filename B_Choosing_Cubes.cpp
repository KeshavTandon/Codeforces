#include <bits/stdc++.h>
using namespace std;
void solve1()
{
    int n;
    cin >> n;
    bool flag = false;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (is_sorted(v.begin(), v.end()))
        {
            flag = true;
            break;
        }
        rotate(v.begin(), v.begin() + 1, v.end());
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int favorite_value = a[f - 1];
    sort(a.rbegin(), a.rend());

    int count_greater = 0, count_equal = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > favorite_value)
            count_greater++;
        else if (a[i] == favorite_value)
            count_equal++;
    }

    if (count_greater >= k)
    {
        cout << "NO" << endl;
    }
    else if (count_greater + count_equal <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "MAYBE" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
