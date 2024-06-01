#include <bits/stdc++.h>
using namespace std;
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solved()
{
    string str, r;
    cin >> str;
    bool chk = is_sorted(str.begin(), str.end());
    bool rchk = is_sorted(str.rbegin(), str.rend());
    if (chk == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (rchk == 1)
    {
        cout << 2 << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str[i + 1])
            cnt += 1;
    }

    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        solved();
    }
    return 0;
}