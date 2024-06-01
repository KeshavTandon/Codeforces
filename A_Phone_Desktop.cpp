#include <bits/stdc++.h>
using namespace std;
#define ll long long
int calculateScreens(int x, int y)
{
    //total rows and cols
    const int rows = 5;
    const int cols = 3;

    const int c = rows * cols;
    const int cells = 4;

    int maxi = (rows / 2) * (cols / 2);

    int s = (y + maxi - 1) / maxi;

    int u = y * cells;

    int re = s * c - u;

    int r = x - re;
    int s1 = (r > 0) ? (r + c - 1) / c : 0;

    return s + s1;
}
void solve()
{
    ll num1, num2;
    cin >> num1 >> num2;
    cout << calculateScreens(num1, num2) << endl;
}
int main()
{
    int tcc;
    cin>>tcc;
    while(tcc--)
    {
     solve();
    }
}

