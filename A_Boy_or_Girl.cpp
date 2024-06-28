#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   string s;
   cin>>s;
   int distinct=0;
   unordered_map<char,int>mp;
   for(int i=0;i<s.size();i++)
   {
    if(mp.find(s[i])!=mp.end())
     mp[s[i]]++;
     else {
        distinct++;
        mp[s[i]]=1;
     }
   }
//    cout << distinct<< endl;
   if(distinct&1)
   cout << "IGNORE HIM!" << endl;
   else 
   cout<< "CHAT WITH HER!" << endl;
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
