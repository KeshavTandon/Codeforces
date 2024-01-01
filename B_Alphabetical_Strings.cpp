#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string str;
    cin >> str;
    string temp;
    int size = str.size();
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        temp.push_back('a' + (i));
    }
    // cout<<temp<<endl;
  
    int i = 0, start, end;

    while (i < temp.size())
    {
        if (i == 0)
        {
            if (str.find(temp[i]) != string::npos) // element found
            {
                auto pos = str.find(temp[i]);
                start = pos - 1;
                end = pos + 1;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if (start !=-1 && (temp[i] == str[start]))
            {
                start--;
            }
            else if (end!=size && (temp[i] == str[end]))
            {
                end++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        i++;
        // cout << start << " " << end << endl;
    }
        cout << "YES"  << endl;
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
