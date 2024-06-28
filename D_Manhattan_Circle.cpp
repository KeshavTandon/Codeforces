#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to find center of grid with '#' characters using weighted sum
vector<pair<int, int>> solver(int t, const vector<pair<int, vector<string>>> &test_cases)
{
    vector<pair<int, int>> results;

    for (const auto &case_data : test_cases)
    {
        int n = case_data.first;
        const vector<string> &grid = case_data.second;

        int total_hashes = 0;
        int weighted_sum_row = 0, weighted_sum_col = 0;

        for (int i = 0; i < n; ++i)
        {
            int m = grid[i].size();
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '#')
                {
                    total_hashes++;
                    weighted_sum_row += i;
                    weighted_sum_col += j;
                }
            }
        }

        // Calculate center using weighted sum
        int center_x = (total_hashes == 0) ? 0 : (weighted_sum_row / total_hashes) + 1;
        int center_y = (total_hashes == 0) ? 0 : (weighted_sum_col / total_hashes) + 1;

        results.push_back({center_x, center_y});
    }

    return results;
}

int main()
{
    int t;
    cin >> t;

    vector<pair<int, vector<string>>> test_cases(t);

    for (int i = 0; i < t; ++i)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[j];
        }

        test_cases[i] = {n, grid};
    }

    vector<pair<int, int>> results = solver(t, test_cases);

    for (const auto &result : results)
    {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
