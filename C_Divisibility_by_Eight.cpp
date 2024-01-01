#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    s = "00" + s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            for (int k = j + 1; k < s.size(); k++)
            {
                int ans = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (ans % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    solve();
}
