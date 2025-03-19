#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a , b , count=0;
     cin>>a>>b;

     for (ll i = 0; i <= a; i++)
     {
        for (ll j = 0; j <= a; j++)
        {
            for (ll k = 0; k <= a; k++)
        {
                if((i+j+k)<=a and (i*j*k)<=b)
                {
                    count++;
                }
            }
            
        }
        
     }

     cout<<count;
     
    return 0;
}