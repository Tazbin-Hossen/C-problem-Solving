#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n; cin>>n;
     vector<ll>vec;
     for (ll i = 0; i < n; i++)
     {
        ll x; cin>>x;
        vec.push_back(x);
     }
     for (ll i = 1; i <= n; i++)
     {
        for (ll j = 0; j < vec.size(); j++)
        {
            if(i==vec[j]){cout<<j+1<<" ";}
        }
     }
    return 0;
}