#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    priority_queue<int>pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    while(pq.empty())
    {
        int top1=pq.top();
        pq.pop();
        int top2=pq.top();
        pq.pop();
        if(top1!=0 && top2!=0)
        {
            top1--;
            top2--;
            
        }
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
