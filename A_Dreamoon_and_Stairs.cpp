#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n=3;
    vector<pair<ll,ll>>vec;
    for(ll i=0;i<n;i++)
    {
        ll x,y; cin>>x>>y;
        vec.push_back({x,y});
    }
    for(ll i=0;i<n;i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    return 0;
}