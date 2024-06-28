#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
        freq[x]++;
    }
    int ans=0;
    for(auto it:freq)
    {
        if(it.second>2)
        {
            ans+=it.second/3;
        }
    }
    cout << ans << endl;
 
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
