#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a, p, q;
    cin >> a >> p >> q;
    string str;
    cin >> str;
    int pl = 0, mi = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+')
            pl++;
        else
            mi++;
    }
    // cout << pl << " " << mi << endl;
    if ((pl == mi) && (p + pl >= a))
    {
        cout << "MAYBE" << endl;
        return;
    }
    if ((a != p) && (p + pl - mi < a))
    {
        cout << "NO" << endl;
        return;
    }
    if (((a != p) && (p + pl - mi >= a)) || (a <= p))
    {
        cout << "YES" << endl;
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
