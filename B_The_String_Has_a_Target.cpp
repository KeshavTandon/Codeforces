#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        char mini=s[0];
        int index;
        bool flag=false;
        for(int i=1;i<s.size();i++)
        {
            if((s[i]-'0')<= mini-'0')
            {
                flag=true;
                mini=s[i];
                index=i;
            }
        }
        string temp="";
        if(mini<=s[0] && flag)
        {
            s.erase(s.begin()+index);
            temp+=mini;
            temp+=s;
            cout << temp << endl;
        }
        else{
            cout << s << endl;
        }
    }
}
