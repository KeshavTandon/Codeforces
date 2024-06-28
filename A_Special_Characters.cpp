#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string ans="";
    string temp="AAB";
    if(n&1)
    {
        cout << "NO" << endl;
        return;
    }
   else{
     while(n-2>=0)
     {
        ans+=temp;
        n-=2;
     }
     cout << "YES" << endl;
     cout << ans << endl;
   }
}
int main()
{
    int tcc ;
    cin >> tcc;
    while (tcc--)
    {
        solve();
    }
}
