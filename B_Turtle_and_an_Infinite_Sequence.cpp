#include <iostream>
#include <vector>
using namespace std;

int findValue(int n, int m)
{
    if (m == 0)
    {
        return n;
    }

    // Large m values stabilize the values
    if (m >= 60)
    {
        // All bits set due to OR operation propagation
        return (1 << 30) - 1;
    }

    // Simulate for smaller m values
    vector<int> a(n + 2);
    for (int i = 0; i <= n + 1; ++i)
    {
        a[i] = i;
    }

    for (int t = 0; t < m; ++t)
    {
        vector<int> a_new = a;
        a_new[0] = a[0] | a[1];
        for (int i = 1; i <= n; ++i)
        {
            a_new[i] = a[i - 1] | a[i] | a[i + 1];
        }
        a = a_new;
    }

    return a[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << findValue(n, m) << endl;
    }
    return 0;
}
