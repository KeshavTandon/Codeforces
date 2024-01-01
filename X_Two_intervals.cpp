#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1>l2) //first value will always be the initial value
    {
        swap(l1,l2);
        swap(r1,r2);
    }
    if(l2>r1)
    cout << -1 << endl;
    else
    cout << l2 << " " <<  min(r1,r2) << endl;
}