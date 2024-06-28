#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   string s;
   cin>>s;
   vector<int>v;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]>='0' && s[i]<='9')
    {
        v.push_back(s[i]-'0');
    }
   }
   sort(v.begin(),v.end());
   string ans="";
   for(int i=0;i<v.size();i++)
   {
    ans+=v[i]+'0';
    ans+='+';
   }
   ans.pop_back();
   cout << ans << endl;
    
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
