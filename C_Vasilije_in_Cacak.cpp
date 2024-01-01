#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll tot_sum = (n * (n + 1)) / 2;
        ll min_sum = (k * (k + 1)) / 2;
        ll max_sum = tot_sum - ((n - k) * (n - k + 1)) / 2;
        if (x >= min_sum and x <= max_sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}