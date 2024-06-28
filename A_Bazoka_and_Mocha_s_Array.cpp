#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    bool flag=false;
    int count=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
       if(is_sorted(v.begin(),v.end()))
       {
        flag=true;
        break;
       }
       rotate(v.begin(),v.begin()+1,v.end());
    }
    if(flag)
    cout << "YES" << endl;
    else cout << "NO" << endl;

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
