#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        vector<int> v;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> ans;
        ans.push_back(v[0]);
        for (int i = 1; i < b; i++)
        {
            if (v[i] >= v[i - 1])
            {
                ans.push_back(v[i]);
            }
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}