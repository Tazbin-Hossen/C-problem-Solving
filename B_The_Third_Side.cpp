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
        vector<ll>vec;
        for (ll i = 0; i < n; i++)
        {
          ll x; cin>>x;
          vec.push_back(x);
        }
        for (ll i = 0; i < vec.size(); i++)
        {
            sum+=vec[i];
        }
        cout<<sum-(n-1)<<nl;
     }
    return 0;
}