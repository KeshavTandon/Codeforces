#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            v.push_back(temp);
        }
        int count=0;
        string match="vika";
        for(int i=0;i<m;i++) //col iterate
        {
            for(auto it:v) //matrix
            {
                if(it[i]==match[count]){
                    count++;
                    break;
                }
            }
            if(count==4) break;
        }
        if(count==4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}