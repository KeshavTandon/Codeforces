#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> cnt;
        int max1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            max1 = max(max1, cnt[x]);
        }
        int l = cnt.size();
        if (max1 > l)
            cout << l << endl;
        else if (max1 == l)
            cout << l - 1 << endl;
        else
            cout << max1 << endl;
    }
}