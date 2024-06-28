#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll num1, num2;
    cin >> num1 >> num2;
   ll ans=0;
   while(num1>0 || num2>0)
   {
    if(num2>=2)
    {
        num1-=7;
        num2-=2;
        ans++;
    }
    else if(num2==1)
    {
        num1-=11;
        num2-=1;
        ans++;
    }
    else {
        num1-=15;
        ans++;
    }
   }
   cout << ans << endl;
}
int main()
{
    int tcc;
    cin>>tcc;
    while(tcc--)
    {
     solve();
    }
}

