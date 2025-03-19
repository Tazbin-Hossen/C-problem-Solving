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
        vector<ll>vec;
        for (ll i = 0; i <n ; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        if(vec[n-1]<=vec[n-2] or vec[n-1]==1 or vec[n-2]==1 )
        {
            cout<<"NO"<<nl;
        }
        else
        {
            cout<<"YES"<<nl;
        }
     }
    return 0;
}