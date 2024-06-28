#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define int long long

const long long MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    set<int> stt;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        stt.insert(num);
        b[i] = num;
    }

    multiset<int> rsd;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            rsd.insert(b[i]);
        }
    }

    cin >> m;
    bool f = false;

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        if (rsd.find(x) != rsd.end())
        {
            rsd.erase(rsd.find(x));
            if (i == m - 1)
            {
                f = true;
            }
        }
        else if (stt.count(x) && i == m - 1)
        {
            f = true;
        }
    }

    if (f && rsd.empty())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    int totalTests;
    cin >> totalTests;
    while (totalTests--)
    {
        solve();
    }
    return 0;
}
