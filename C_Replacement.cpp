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
    
    for(ll j=0;j<vec.size();j++)
    {
        if(vec[j]>0)
        {
            cout<<"1"<<" ";
        }
        else if(vec[j]==0)
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<"2"<<" ";
        }
    }
    
    return 0;
}