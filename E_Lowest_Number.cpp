#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll minimum=INT_MAX,iDX;;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll j=0;j<vec.size();j++)
    {
        if(vec[j]<minimum)
        {
            minimum=vec[j];
            iDX=j;
        }
    }
    cout<<minimum<<" "<<iDX+1;

    return 0;
}