#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>vec;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        ll ans=1;
        for(ll i=0;i<vec.size();i++)
        {
            if(i==0){ans*=(vec[i]+1);}
            else{ans*=vec[i];}
        }
        cout<<ans<<endl;
    }
    return 0;
}