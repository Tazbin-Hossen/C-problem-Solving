#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        v[i].first*=-1;
    }
    sort (v.begin(),v.end());
    ll ans=0;
    for(auto u:v)
    {
        if(u==v[k-1]){ans++;}
    }
    cout<<ans<<endl;
    return 0;
}