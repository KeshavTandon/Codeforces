#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int moves = 0;
        bool flag = false;
        if (a == b)
        {
            cout << "0" << endl;
            flag = true;
        }
        int maxi = max(a, b);
        int mini = min(a, b);
        while (maxi > mini)
        {
            int diff = min(maxi - mini, c);
            maxi -= diff;
            mini += diff;
            moves++;
        }
        if (!flag)
            cout << moves << endl;
    }
}