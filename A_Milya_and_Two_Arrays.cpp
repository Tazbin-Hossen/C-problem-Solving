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
        vector<ll>vec2;
        for(ll i=0;i<n;i++)
        {
            ll x ;cin>>x;
            vec2.push_back(x);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        ll sz1=unique(vec.begin(),vec.end())-vec.begin();
        ll sz2=unique(vec2.begin(),vec2.end())-vec2.begin();
        if(sz1>=2&&sz2>=2){cout<<"YES"<<endl;}
        else if(sz1>=3||sz2>=3){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}


    }
    return 0;
}