#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,k; cin>>n>>k;
    vector<ll>vec;
    for (ll i = 0; i < n; i++)
    {
        ll  x; cin>>x;
        vec.push_back(x);
    }
    vector<pair<ll,ll>>v;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(i!=j && vec[i]-vec[j]==k)
            {
                v.push_back({vec[i],vec[j]});
            }
        }
    }
    sort(v.begin(),v.end());
    ll ans=unique(v.begin(),v.end())-v.begin();
    cout<<ans; 
    
    return 0;
}