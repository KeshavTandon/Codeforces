#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if(v[0]==v[n-1]) //all are equal
    cout << "NO" << endl;
    else{
        cout << "YES" << endl;
       int num=v[1];
       bool flag=false;
       for(int i=2;i<n;i++)
       {
        if(v[i]!=num)
        {
            flag=true;
            break;
        }
       }
       if(flag)
       {
        string ans="R";
        for(int i=1;i<n;i++)
        {
            ans+='B';
        }
        cout << ans << endl;
       }
       else{
        string ans="R";
        for(int i=1;i<n-1;i++)
        {
            ans+='B';
        }
        ans+='R';
        cout << ans << endl;
       }
    }
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
