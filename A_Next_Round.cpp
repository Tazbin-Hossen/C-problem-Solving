#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n,m,count=0; cin>>n>>m;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll j=0;j<vec.size();j++)
    {
        if((vec[j]>=vec[m-1]) && vec[j]>0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}