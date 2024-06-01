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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> vec(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int x;
            cin >> x;
            vec[i][j] = x;
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (vec[i][j] == 0)
                cout << ".";
            else if (vec[i][j] == 1)
                cout << "A";
            else
                cout << char(vec[i][j]-1+'A');
        }
        cout << endl;
    }
}

int32_t main()
{
    fastio();

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}