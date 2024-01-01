#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>primes(k);
    for(int i=0;i<k;i++)
    cin>>primes[i];
    vector<ll>divisors(k+1);
    for(int mask=1;mask<(1<<k);mask++) //all the combinations
    {
        int numberofDivisors=0;
        ll temp=n;
        for(int i=0;i<k;i++) //traversing on each prime number
        {
            if((1<<i)&mask)
            {
                numberofDivisors++;
                temp/=primes[i];
            }
        }
        divisors[numberofDivisors]+=temp;
    }
    ll ans=0;
    for(int i=1;i<=k;i++)
    {
        if(i%2==0)
        {
            ans-=divisors[i];
        }
        else
            ans += divisors[i];
    }
    cout << ans << endl;
}
int main()
{
    solve();
}
