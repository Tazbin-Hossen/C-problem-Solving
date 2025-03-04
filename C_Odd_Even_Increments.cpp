#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n,ans=0; cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            v.push_back(x);
        }
        for(ll i=0;i<v.size();i++)
        {if(v[i] %2==0){v[i]++;}}
        for(auto u:v){if(u%2!=0){ans++;}}
        if(ans==n){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}