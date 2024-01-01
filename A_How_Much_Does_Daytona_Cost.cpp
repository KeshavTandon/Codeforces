#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x,k;
        cin>>x>>k;
        vector<int>v(x);
        for(int i=0;i<x;i++) cin>>v[i];
        bool flag=false;
        for(int i=0;i<x;i++)
        {
            if(v[i]==k)
            {
                flag=true;
                break;
            }
        }
        if(flag==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}