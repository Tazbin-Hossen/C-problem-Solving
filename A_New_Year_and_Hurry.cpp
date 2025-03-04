#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b,solve=0 ;
     cin>>a>>b;
     ll min_baki=240-b;
     for(ll i=1;i<=a;i++)
     {
        if(min_baki-(i*5)>=0)
        {
            min_baki-=(i*5);
            solve++;
        }
        else{break;}
     }
     cout<<solve;
    return 0;
}