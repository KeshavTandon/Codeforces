#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> v(3);
        int a, b, c;
        cin >>v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        int ans=0;
        bool flag=false;
        for (int i = 1; i < 3; i++)
        {
            if (v[i] % v[0] != 0)
            {
                flag=true;  
            }
            else
            {
                ans += (v[i] / v[0]) - 1;
            }
        }
        
            if (ans <= 3 && !flag)
                cout << "YES" << endl;
            else
            cout << "NO" << endl;    
    }
}
