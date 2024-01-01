#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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
bool isPrime(int n)
{
    ll count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    return count==0;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>ans(n);
    for(int i=0;i<n;i++) cin>>ans[i];
    for(int i=0;i<n;i++)
    {
        if(ans[i]==1)
        {
            cout << "NO" << endl;
            continue;
        }
        ll val=sqrt(ans[i]);
        if((val*val)==ans[i] && isPrime(val))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}

int32_t main()
{

    fastio();

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}