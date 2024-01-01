#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n,strength,endurance,poly_strength,poly_endurance,weight;
       cin>>n;
       for(int i=0;i<n;i++)
       {
        cin>>strength>>endurance;
        if(i==0)
        {
            poly_strength=strength;
            poly_endurance=endurance;
            weight=strength;
        }
        else
        {
            if (strength >= poly_strength && endurance>=poly_endurance){
                weight = -1;
                break;
            } 
        }
       }
       cout <<weight << endl; 
    }
}