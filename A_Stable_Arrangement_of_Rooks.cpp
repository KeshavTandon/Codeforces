#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 1e6;
vector<long long> facti(MAX_N);

void solve()
{
    facti[0] = 1;
    for (long long i = 1; i < MAX_N; ++i)
    {
        facti[i] = (facti[i - 1] * i) % MOD;
    }
    int n;
    cin >> n;

    // for storing ans
    vector<long long> reslt(n + 1);

    for (int i = 1; i <= n; ++i)
    {

        long long q = n / i;
        long long intermediate_sum = (i - 1) + (q * (i - 1)) + q;
        long long excessed = intermediate_sum - n;

        // Calculate the result using precomputed factis
        long long res = (facti[q] * facti[n - q]) % MOD;
        res = (res * (excessed + 1)) % MOD;

        reslt[i] = res;
    }

    // for the current test case
    for (int i = 1; i <= n; ++i)
    {
        cout << reslt[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cases;
    cin >> cases;
    while (cases-- > 0)
    {
        solve();
    }

    return 0;
}
