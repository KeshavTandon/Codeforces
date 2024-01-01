#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        int x=3;
        while(k--)
        {
            cout << x << " ";
            x+=2;
        }
        cout << endl;
    }
}