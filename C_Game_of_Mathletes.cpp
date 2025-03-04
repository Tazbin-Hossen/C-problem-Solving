#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n,k,count=0; cin>>n>>k;
        vector<ll>vec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for(ll i=0;i<vec.size()-1;i++)
        {
            for(ll j=i+1;j<vec.size();j++)
            {
                if((vec[i]+vec[j])==k){count++;}
            }
        }
        cout<<count<<endl;
    }
    return 0;
}