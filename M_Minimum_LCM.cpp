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
        ll n; cin>>n;
        ll min_LCM = INT_MAX , p,q;
        for( ll i = 1 ; i*2<=n; i++)
        {
                ll x = (i * (n-i) ) / (__gcd((n-i),i));
                if(x<min_LCM)
                {
                    min_LCM = x;
                    p = i;
                    q = n-i;
                }
        }
        cout<<p<<" "<<q<<nl;
     }
    return 0;
}