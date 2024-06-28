#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   vector<vector<int>>v(5,vector<int>(5,0));

   for(int i=0;i<5;i++)
   {
    for(int j=0;j<5;j++)
    {
        cin>>v[i][j];
    }
   }

   int row=-1,col=-1;
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j < 5; j++)
       {
          if(v[i][j]==1)
          {
            row=i+1;
            col=j+1;
          }
       }
   }
//    cout << row  << "" << col << endl;
    int ans = abs(3 - row) + abs(3 - col);
    cout <<  ans << endl;
}
int main()
{
    int tcc=1;
    // cin >> tcc;
    while (tcc--)
    {
        solve();
    }
}
