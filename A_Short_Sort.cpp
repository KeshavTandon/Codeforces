#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        string match="abc";
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(str[i]==match[i])
            {
                count++;
            }
        }
        if((count==1) || (count==3))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}