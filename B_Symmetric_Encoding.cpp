#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   set<char>st;
   for(int i=0;i<s.size();i++)
   {
    st.insert(s[i]);
   }
   string t;
   for(auto it:st)
   t+=it;
   unordered_map<char,char>mp;
   int i=0,j=t.size()-1;
   while(i<=j)
   {
    mp[t[i]]=t[j];
    mp[t[j]]=t[i];
    i++,j--;
   }
   string ans="";
   for(int k=0;k<n;k++)
   {
    ans+=mp[s[k]];
   }
   cout << ans << endl;
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
