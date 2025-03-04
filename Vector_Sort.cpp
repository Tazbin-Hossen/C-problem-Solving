#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {ll x; cin>>x;vec.push_back(x);}
    sort(vec.begin(),vec.end());
    for(ll i=0;i<n;i++)
    {cout<<vec[i]<<" ";}
    return 0;
}