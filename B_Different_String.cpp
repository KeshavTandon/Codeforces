#include <bits/stdc++.h>
using namespace std;
void yess() { cout << "YES\n"; }
void noo() { cout << "NO\n"; }

void solved()
{
    string str, r;
    cin >> str;
    if (str.size() == 1)
    {
        noo();
        return;
    }
    char c = str[0];
    int pos, cnt = 1;
    for (int i = 1; i < str.size(); i++)
    {
        if (c == str[i])
        {
            cnt++;
            continue;
        }
        else
        {
            c = str[i];
            pos = i;
            break;
        }
    }
    if (cnt == str.size())
    {
        noo();
        return;
    }
    swap(str[0], str[pos]);
    yess();
    cout << str << endl;
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