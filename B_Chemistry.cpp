#include <bits/stdc++.h>
using namespace std;
void func(string str,int k)
{
    vector<int>v(26);
    for(int i=0;i<str.size();i++) //frequency
    {
        v[str[i]-'a']++; // 0-25
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2!=0) //odd
        {
            count++;
        }
    }
    if((count-1)>k)cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        func(str,k);
    }
}