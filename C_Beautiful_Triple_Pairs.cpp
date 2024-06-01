#include <bits/stdc++.h>
using namespace std;
#define ll long long

int calculateScreens(int x, int y)
{
    // total rows and cols
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
    // input n
    int in;
    cin >> in;

    vector<int> vc(in);

    for (int i = 0; i < in; i++)
        cin >> vc[i];

    vector<array<int, 3>> te;

    for (int i = 0; i <= in - 3; i++)
    {
        te.push_back({vc[i], vc[i + 1], vc[i + 2]});
    }
    int ouu = te.size();

    int reslttt = 0;

    for (int i = 0; i < ouu; i++)
    {
        for (int j = i + 1; j < ouu; j++)
        {
            int d = 0;

            if (te[i][0] != te[j][0])
            {
                d++;
            }

            if (te[i][1] != te[j][1])
            {
                d++;
            }

            if (te[i][2] != te[j][2])
            {
                d++;
            }

            if (d == 1)
                reslttt++;
        }
    }
    cout << reslttt << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
