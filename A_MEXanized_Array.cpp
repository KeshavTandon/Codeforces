#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        bool flag=false;
        if(k>n || k-x>1){
            cout << -1 << endl;
            continue;
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=i;
        }
        int size=n-k;
        if(k!=x){
        while(size>0)
        {
            sum+=x;
            size--;
        }
        }
        else
        {
        while (size != 0)
        {
            sum += x-1;
            size--;
        }
        }
        if(!flag)
        {
            cout << sum << endl;
        }  
    }
}