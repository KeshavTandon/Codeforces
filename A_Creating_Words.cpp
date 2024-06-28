#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string x,y;
    cin >> x >>y;
    char temp=x[0];
    x[0]=y[0];
    y[0]=temp;
    cout << x << " " << y << endl;
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
