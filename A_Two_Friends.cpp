#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   vector<int>v(n+1);
   v[0]=0;
   for(int i=1;i<=n;i++)
   cin>>v[i];

   for(int i=1;i<=n;i++)
   {
    //    cout << "at i" << v[v[i]] << " ";
       if (i == v[v[i]])
       {
           cout << 2 << endl;
           return;
        }
   }
   cout << 3 << endl;
}
int main()
{
    int tcc;
    cin >> tcc;
    while (tcc--)
    {
        solve();
    }
}
