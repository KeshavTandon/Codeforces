#include <bits/stdc++.h>
using namespace std;
#define ll long long


map<char, pair<int, int>> mpp;
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
void jdhfjksdf()
{
    // input n
    int in;
    cin >> in;

    vector<int> vc(in);

    for (int i = 0; i < in; i++)
        cin >> vc[i];

    vector<array<int, 3>> te;

    for (int i = 0; i <= in - 3; i++)
    {
        te.push_back({vc[i], vc[i + 1], vc[i + 2]});
    }
    int ouu = te.size();

    int reslttt = 0;

    for (int i = 0; i < ouu; i++)
    {
        for (int j = i + 1; j < ouu; j++)
        {
            int d = 0;

            if (te[i][0] != te[j][0])
            {
                d++;
            }

            if (te[i][1] != te[j][1])
            {
                d++;
            }

            if (te[i][2] != te[j][2])
            {
                d++;
            }

            if (d == 1)
                reslttt++;
        }
    }
    cout << reslttt << endl;
}
bool solve(string s, int f, int b, string ds)
{


   ///
    int xss = 0;

    // 
    int yss = 0;
    //
    int cnt = 0;
    int cntr = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            cnt++;
        }
        else
        {
            cntr++;
        }
    }
    if (cnt == 0 || cntr == 0)
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            pair<int, int> mo = mpp[ds[i]];
            xss += mo.first;
            yss += mo.second;
        }
    }
    if (xss != f || yss != b)
    {
        return false;
    }
    return true;
}

int main()
{
    
    ll t;
    cin >> t;
    mpp['N'] = {0, 1};

    mpp['S'] = {0, -1};

    mpp['E'] = {1, 0};

    mpp['W'] = {-1, 0};

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int xss = 0, yss = 0;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> mo = mpp[s[i]];
            xss += mo.first;
            yss += mo.second;
        }
        if (xss % 2 != 0 || yss % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        xss = xss / 2;
        yss = yss / 2;
        string reslttttt = s;
        // cout<<xss<<" "<<yss<<endl;
        if (xss == 0 && yss == 0)
        {
            int cnt[2] = {0, 0};
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    cnt[0]++;
                }
                if (s[i] == 'S')
                {
                    cnt[1]++;
                }
            }
            bool flgg = false;
            if (cnt[0] != 0 && cnt[1] != 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'N')
                    {
                        reslttttt[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'S')
                    {
                        reslttttt[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (reslttttt[i] != 'R')
                    {
                        reslttttt[i] = 'H';
                    }
                }
                if (solve(reslttttt, xss, yss, s))
                {
                    flgg = true;
                    cout << reslttttt << endl;
                }
            }
            if (!flgg)
            {
                reslttttt = s;
                cnt[0] = 0;
                cnt[1] = 0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'E')
                    {
                        cnt[0]++;
                    }
                    if (s[i] == 'W')
                    {
                        cnt[1]++;
                    }
                }

                if (cnt[0] != 0 && cnt[1] != 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'E')
                        {
                            reslttttt[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'W')
                        {
                            reslttttt[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (reslttttt[i] != 'R')
                        {
                            reslttttt[i] = 'H';
                        }
                    }
                    if (solve(reslttttt, xss, yss, s))
                    {
                        flgg = true;
                        cout << reslttttt << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else if (xss >= 0 && yss >= 0)
        {

            int txss = 0, tyss = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && txss != xss)
                {
                    txss++;
                    reslttttt[i] = 'R';
                }
                else if (s[i] == 'N' && tyss != yss)
                {
                    tyss++;
                    reslttttt[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (reslttttt[i] != 'R')
                {
                    reslttttt[i] = 'H';
                }
            }
            if (solve(reslttttt, xss, yss, s))
            {
                cout << reslttttt << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (xss <= 0 && yss >= 0)
        {
            int txss = 0, tyss = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && txss != xss)
                {
                    txss--;
                    reslttttt[i] = 'R';
                }
                else if (s[i] == 'N' && tyss != yss)
                {
                    tyss++;
                    reslttttt[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (reslttttt[i] != 'R')
                {
                    reslttttt[i] = 'H';
                }
            }
            if (solve(reslttttt, xss, yss, s))
            {
                cout << reslttttt << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (xss <= 0 && yss <= 0)
        {
            int txss = 0, tyss = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && txss != xss)
                {
                    txss--;
                    reslttttt[i] = 'R';
                }
                else if (s[i] == 'S' && tyss != yss)
                {
                    tyss--;
                    reslttttt[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (reslttttt[i] != 'R')
                {
                    reslttttt[i] = 'H';
                }
            }
            if (solve(reslttttt, xss, yss, s))
            {
                cout << reslttttt << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            int txss = 0, tyss = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && txss != xss)
                {
                    txss++;
                    reslttttt[i] = 'R';
                }
                else if (s[i] == 'S' && tyss != yss)
                {
                    if (0 == 9)
                    {
                        cout << "sdasd" << endl;
                    }
                    tyss--;
                    reslttttt[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (0 == 9)
                {
                    cout << "sdasd" << endl;
                }
                if (reslttttt[i] != 'R')
                {
                    reslttttt[i] = 'H';
                }
            }
            if (0 == 9)
            {
                cout << "sdasd" << endl;
            }
            if (solve(reslttttt, xss, yss, s))
            {
                cout << reslttttt << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
