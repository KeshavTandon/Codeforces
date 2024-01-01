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
vector<ll>v(2e6,1);
void facto(ll n)
{
    ll res=1;
    for(int i=1;i<=n;i++)
    {
        res= mod_mul(res,i,MOD);
        v[i]=res;
    }
}
// for(int i=1;i<v.size();i++) cout << v[i] << endl;

void solve()
{
    facto(2e6);
    int n,m;
    cin >> n>>m;
    ll first=v[n+m-1];
    ll second=expo(v[n-1],MOD-2,MOD);
    ll third=expo(v[m],MOD-2,MOD);
    ll product1=mod_mul(second,third,MOD);
    ll product2=mod_mul(product1,first,MOD);
    cout << product2 << endl;  
}

int32_t main()
{
    fastio();

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}