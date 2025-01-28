#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll temp=n;
    ll bag_jabe=0;
    ll store_korchi=-1;

    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll j=0;j<vec.size();j++)
    {
        for(ll k=0;k<vec.size();k++)
        {
            if(vec[k]%vec[j]==0){bag_jabe++;}
        }
        if(bag_jabe==temp){store_korchi=vec[j];}
        bag_jabe=0; 
    }
    cout<<store_korchi;
    return 0;
}