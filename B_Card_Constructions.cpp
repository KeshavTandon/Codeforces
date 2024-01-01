#include <bits/stdc++.h>
using namespace std;
int solve(vector<long long> &v, long long n)
{
    long long c = 0;
    while (n > 0)
    {
        auto index = upper_bound(v.begin(), v.end(), n) - v.begin();
        if (index == 0)
            break;
        index--;
        n -= v[index];
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    vector<long long> v;
    for (long long i = 1; i <= 100000; i++)
    {
        v.push_back((3 * i * i + i) / 2);
    }
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = solve(v, n);
        cout << ans << endl;
    }
}