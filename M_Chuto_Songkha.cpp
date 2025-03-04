#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
    ll ans=*min_element(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]==ans){cout<<ans<<" "<<(i+1);break;}
    }
    return 0;
}