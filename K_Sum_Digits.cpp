#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll sum=0;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll i=0;i<vec.size();i++)
    {
       sum+=vec[i];
    }
    cout<<sum;
    return 0;
}