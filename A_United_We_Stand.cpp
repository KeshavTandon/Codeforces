#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define int long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define ll long long
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define PI 3.141592653589793238462
#define INF 1e18
#define endl "\n"

/*---------------------------------------------------------------------------------------------------------------------------*/
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
/*--------------------------------------------------------------------------------------------------------------------------*/

// for(int i=1;i<v.size();i++) cout << v[i] << endl;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    multiset<int> hi, lo;
    int sum_hi = 0, sum_lo = 0;
    vector<int> final;
    for (int i = 0; i < n; ++i)
    {
        if (i & 1)
        {
            if (a[i] > *hi.begin())
            {
                sum_hi += a[i] - *hi.begin();
                sum_lo += *hi.begin();
                lo.insert(*hi.begin());
                hi.insert(a[i]);
                hi.erase(hi.begin());
            }
            else
            {
                lo.insert(a[i]);
                sum_lo += a[i];
            }
        }
        else
        {
            if (lo.empty())
            {
                hi.insert(a[i]);
                sum_hi += a[i];
            }
            else if (a[i] < *lo.rbegin())
            {
                sum_hi += *lo.rbegin();
                sum_lo += a[i] - *lo.rbegin();
                hi.insert(*lo.rbegin());
                lo.insert(a[i]);
                lo.erase(lo.find(*lo.rbegin()));
            }
            else
            {
                hi.insert(a[i]);
                sum_hi += a[i];
            }
        }
        final.push_back(sum_hi - sum_lo);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        cout << final[x - 1] << " ";
    }
    cout << endl;
}

int32_t main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
        solve();
}