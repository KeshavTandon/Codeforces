#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int calculateScreens(int x, int y)
{
    // total rows and cols
    const int rows = 5;
    const int cols = 3;

    const int c = rows * cols;
    const int cells = 4;

    int maxi = (rows / 2) * (cols / 2);

    int s = (y + maxi - 1) / maxi;

    int u = y * cells;

    int re = s * c - u;

    int r = x - re;
    int s1 = (r > 0) ? (r + c - 1) / c : 0;

    return s + s1;
}
void jdhfjksdf() {
  // extra
}
int main()
{
    int cs;
    cin >> cs;
    while (cs--)
    {
        int mn, sy;
        cin >> mn >> sy;
        vector<pair<int, int>> os(mn);
        int mh = 0;

        for (int i = 0; i < mn; i++)
        {
            cin >> os[i].first >> os[i].second;
            mh += os[i].second;
        }
        int hm[mn + 1][mh + 1];
        for (int i = 0; i <= mn; i++)
        {
            for (int j = 0; j <= mh; j++)
            {
                hm[i][j] = INT_MIN;
            }
        }

        hm[1][0] = sy;

        if (os[0].first == 0)
        {
            hm[1][os[0].second] = sy;


        }
        for (int i = 2; i <= mn; i++)

        {

            for (int j = 0; j <= mh; j++)

            {

                hm[i][j] = hm[i - 1][j] + sy;


                
                if (j >= os[i - 1].second)
                {
                    int ph = j - os[i - 1].second;

                    int pb = hm[i - 1][ph];

                    if (pb >= os[i - 1].first)
                    {
                        hm[i][j] = max(hm[i][j], pb - os[i - 1].first + sy);

                    }
                }
            }
        }
        int oze = 0;

        for (int i = mh; i >= 0; i--)
        {
            if (hm[mn][i] >= 0)
            {
                oze = i;
                break;
            }
        }
        cout << oze << endl;
    }
    return 0;
}