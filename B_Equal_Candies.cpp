#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll minimum=INT_MAX,sum=0;
        vector<ll>vec;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for(ll j=0;j<vec.size();j++)
        {
            if(vec[j]<minimum){minimum=vec[j];}
        }
        for(ll k=0;k<vec.size();k++)
        {
            if(vec[k]-minimum>0){sum+=(vec[k]-minimum);}
        }
        cout<<sum<<endl;
    }
    return 0;
}