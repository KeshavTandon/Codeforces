#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto it:mp)
    {
        if(it.second>=k)
        {
            cout << k-1 << endl;
            return;
        }
    }
    
    cout << n << endl;
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
