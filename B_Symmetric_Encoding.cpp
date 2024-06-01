#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll size;
    cin >> size;
    string s;
    cin>>s;

   //storing unique chars
    set<char> unq_chrs(s.begin(), s.end());

    vector<char> r(unq_chrs.begin(), unq_chrs.end());
    sort(r.begin(), r.end());

   
    vector<char> v(r);
    //reversing 
    reverse(v.begin(), v.end());

   //mapping chars
    map<char, char> mppp;
    for (size_t i = 0; i < v.size(); ++i)
    {
        mppp[r[i]] = v[i];
    }

    
    string reslttt;
    for (char chr : s)
    {
        reslttt += mppp[chr];
    }

    cout << reslttt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

