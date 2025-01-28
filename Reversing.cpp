#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll j=vec.size()-1;j>=0;j--)
    {
        cout<<vec[j]<<" ";
    }
    
    return 0;
}