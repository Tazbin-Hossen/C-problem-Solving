#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a, b; cin>>a>>b;
        vector<ll>vec;
        for(ll i=0;i<a;i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        ll coin=0,zero=0;
        for(ll i=0;i<vec.size();i++)
        {
            if(coin>0&&vec[i]==0){zero++;}
            if(vec[i]>=b){coin+=vec[i];}
        }
        if(coin>=zero){cout<<zero<<endl;}
        else{cout<<coin<<endl;}
        
    }
    return 0;
}