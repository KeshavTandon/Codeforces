#include <iostream>
#include <algorithm>

using namespace std;

void sol()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    int count = 0;

    // Iterate over all divisors of k
    for (int i = 1; i * i <= k; ++i)
    {
        if (k % i == 0)
        {
            int j = k / i;

            // Check conditions for each divisor pair (i, j)
            if (i <= x && j <= y && k / (i * j) <= z)
            {
                int count_i = (x - i + 1);
                int count_j = (y - j + 1);
                int count_k = (z - k / (i * j) + 1);
                count = max(count, count_i * count_j * count_k);
            }

            // Check the symmetric pair (j, i) if i != j
            if (i != j && j <= x && i <= y && k / (j * i) <= z)
            {
                int count_i = (x - j + 1);
                int count_j = (y - i + 1);
                int count_k = (z - k / (j * i) + 1);
                count = max(count, count_i * count_j * count_k);
            }
        }
    }

    cout << count << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        sol();
    }

    return 0;
}
