#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll k,s,count=0; cin>>k>>s;
     for (ll i = 0; i <= k; i++)
     {
        for(ll j = 0; j <= k; j++)
        {
            ll z = s-i-j;
            if(z>=0 and z<=k)
            {
                count++;
            }
            
        }
     }
     cout<<count;
     
    return 0;
}