#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    ll sz=unique(vec.begin(),vec.end())-vec.begin();
    cout<<sz;

    return 0;
}