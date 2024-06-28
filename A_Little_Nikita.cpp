#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, m;
    cin >> n >> m;
   if(n>=m && ((n%2)==(m%2)))
   cout << "Yes" << endl;
   else cout << "No" << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}
