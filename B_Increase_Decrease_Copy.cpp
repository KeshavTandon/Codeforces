#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef vector<ll> vll;

//  to compute the minimum difference from last value
ll computeMinDiff(const vll &arrayA, const vll &arrayB, ll lastVal)
{
    ll minDiff = 1e15;
    for (size_t i = 0; i < arrayA.size(); ++i)
    {
        minDiff = min(minDiff, abs(arrayA[i] - lastVal));
        minDiff = min(minDiff, abs(arrayB[i] - lastVal));
    }
    return minDiff;
}

ll calculateAnswer(const vll &arrayA, const vll &arrayB, ll lastVal)
{
    ll totalDifference = 0;
    bool inBetween = false;
    for (size_t i = 0; i < arrayA.size(); ++i)
    {
        totalDifference += abs(arrayA[i] - arrayB[i]);
        if (lastVal >= min(arrayA[i], arrayB[i]) && lastVal <= max(arrayA[i], arrayB[i]))
        {
            inBetween = true;
        }
    }
    return inBetween ? totalDifference + 1 : totalDifference + computeMinDiff(arrayA, arrayB, lastVal) + 1;
}

int main()
{
   
    
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        
        int n;
        cin >> n;

        
        vll arrayA(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arrayA[i];
        }

        vll arrayB(n + 1);
        for (int i = 0; i < n + 1; ++i)
        {
            cin >> arrayB[i];
        }

        // Last element of array B
        ll lastElementB = arrayB.back();

        // Calculate and output the result
        ll result = calculateAnswer(arrayA, arrayB, lastElementB);
        cout << result << endl;
    }

    return 0;
}
