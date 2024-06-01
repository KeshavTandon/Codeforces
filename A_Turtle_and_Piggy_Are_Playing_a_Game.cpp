#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
int computeMaxDivisions(int l, int r)
{
    
    int maxPowerOf2 = 1;
    while (maxPowerOf2 * 2 <= r)
    {
        maxPowerOf2 *= 2;
    }

    
    while (maxPowerOf2 > r)
    {
        maxPowerOf2 /= 2;
    }

    // If maxPowerOf2 is less than l, adjust it by dividing by 2 until it is within range
    while (maxPowerOf2 < l)
    {
        maxPowerOf2 *= 2;
    }

    // The number of times we can divide the highest power of 2 by 2 until it becomes 1
    int score = 0;
    while (maxPowerOf2 > 1)
    {
        maxPowerOf2 /= 2;
        score++;
    }
    return score;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int lowerBound, upperBound;
        cin >> lowerBound >> upperBound;
        cout << computeMaxDivisions(lowerBound, upperBound) << endl;
    }
    return 0;
}
