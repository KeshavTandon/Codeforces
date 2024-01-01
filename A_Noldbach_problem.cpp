#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void solve()
{
    int n,k;
    cin >> n >>k;
    vector<int> v;
    for(int i=2;i<=n;i++)
    {
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            flag=false;
        }
        if(flag) v.push_back(i);
    }
    // for(int i=0;i<v.size();i++) cout << v[i] << " ";
    int ans=0;
    for(int i=0;i<v.size()-1;i++)
    {
        int val=1+v[i]+v[i+1];
        if(isPrime(val) && val<=n) //found
        {
            ans++;
        }
    }
    ans>=k?cout << "YES":cout << "NO" << endl;
    
}
int main()
{
    solve();
}
