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
        n-=2;
        vector<ll>vec;
        bool ans=false;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for (ll i = 1; i < n-1; i++)
        {
            if(vec[i]==0 && vec[i-1]==1 && vec[i+1]==1)
            {
                ans=true;
                break;
            }
        }
        if(ans==true)
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