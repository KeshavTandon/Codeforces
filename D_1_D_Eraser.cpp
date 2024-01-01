#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int i=0;
        while(i<s.size())
        {
            // cout << "Outside if" << i << endl;
            if(s[i]=='B')
            {
                count++;
                i+=k;
                // cout << "inside if" << i << endl;
            }
            else i++;
        }
        cout << count << endl;
    }
}