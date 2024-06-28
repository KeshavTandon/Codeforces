#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    int var=2,var2=3;
    while(var<=n)
    {
        sum1+=var;
        var+=2;
    }
    while (var2 <= n)
    {
        sum2 += var2;
        var2 += 3;
    }
    if(sum1>sum2)
    cout << 2 << endl;
    else
    cout << 3 << endl;
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
