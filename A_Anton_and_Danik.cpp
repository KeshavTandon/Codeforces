#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    if(mp['A']>mp['D'])
    cout << "Anton" << endl;
    else if(mp['D']>mp['A'])
    cout << "Danik" << endl;
    else
    cout << "Friendship" << endl;
}