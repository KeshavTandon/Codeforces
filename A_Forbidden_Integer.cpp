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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll>ans;
    if(k==1 && x==1)
    {
        cout << "NO" << endl;
        return;
    }
    else if((n&1) && (k==2) && (x==1))
    {
        cout << "NO" << endl;
        return;
    }
    else if(x!=1)
    {
        while(n>0)
        {
            n-=1;
            ans.pb(1);
        }
    }
    else
    {
      int size=n/2;
      if(n&1)
      {
        for(int i=0;i<size-1;i++)
        {
            ans.pb(2);
        }
        ans.pb(3);
      }
      else{
        for (int i = 0; i < size; i++)
        {
            ans.pb(2);
        }
      }
    }
        cout << "YES" << endl;
        cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
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