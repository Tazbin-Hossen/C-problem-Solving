#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll a; cin>>a;
        if(a<5)
        {
            cout<<-1<<nl;
        }
        else
        {
            ll x=0^+a;
            for (ll i = 2; i < a; i++)
            {
                ll y=0^i;
                ll z=x+y;
                if(z>x)
                {
                    cout<<y<<nl;
                    break;
                }
            }
            
        }
     }
    return 0;
}