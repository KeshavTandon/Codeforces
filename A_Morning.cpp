#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        string code = "1234567890";
        int moves = 0, cur = 0;

        int a = (code[0] - '0');
        int b = ((s[cur] - '0') == 0) ? 10 : (s[cur] - '0');
        moves += abs(a - b);
        // debug(moves);
        // cout<< b<< " "<< a << endl;
        for (int i = 1; i < s.size(); i++)
        {
            a = (s[i] - '0');
            b = (s[cur] - '0');
            if (a == b)
            {
                moves += abs(a - b);
            }
            else if (s[i] == '0')
            {
                moves += abs(10 - b);
            }
            else if (s[cur] == '0')
            {
                moves += abs(10 - a);
            }
            else
            {
                moves += abs(a - b);
            }
            // cout<< b<< " "<< a  << endl;
            cur++;
        }

        cout << moves + 4 << '\n';
    }
}