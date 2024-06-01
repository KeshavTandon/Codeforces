#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
bool check(int str, int ended, int p)
{
    if (str <= ended)
    {
        return p >= str && p <= ended;
    }
    else
    {
        return p <= str && p >= ended;
    }
}
bool solve(int a, int b, int c, int d)
{
    int s1 = min(a, b);
    int e1 = max(a, b);
    int s2 = min(c, d);
    int e2 = max(c, d);
    return check(s1, e1, s2) != check(s1, e1, e2) ||
           check(s2, e2, s1) != check(s2, e2, e1);
}

signed main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (solve(a, b, c, d))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}