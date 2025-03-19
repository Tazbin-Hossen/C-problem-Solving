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
        ll n,sum=0; cin>>n;
        ll all_sum = n * (n+1) / 2;
        for (ll i = 1; i <= n; i*=2)
        {
            sum+=i;
        }
        cout<<all_sum - (2*sum)<<nl;
        
     }
    return 0;
}