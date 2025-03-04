#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>x;
        for(ll i=0;i<n;i++) 
        {ll m; cin>>m; x.push_back(m);}
        map<ll,ll>mm;
        for(auto u:x)
        {
            mm[u]++;
        }
    }
    return 0;
}