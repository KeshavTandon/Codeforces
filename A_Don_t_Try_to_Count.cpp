#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int count = 0;
        while (true)
        {
            if (x.size() >= s.size())
            {
                if (x.find(s) != string::npos)
                {
                    cout << count << endl;
                    break;
                }
                else
                {
                    count++;
                    x += x;
                    if (x.find(s) != string::npos)
                    {
                        cout << count << endl;
                        break;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }
            x += x;
            count++;
        }
    }
}