#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    vector<ll>vec;
    for (ll i = 0; i < n; i++)
    {
        ll x; cin>>x; vec.push_back(x);
    }
    vector<ll>pec;
    for (ll i = 0; i < n; i++)
    {
        ll x; cin>>x; pec.push_back(x);
    }
    ll sum=0;
    ll u1=unique(vec.begin(),vec.end())-vec.begin();
    ll u2=unique(pec.begin(),pec.end())-pec.begin();
    for (ll i = 0; i < u1; i++)
    {
        sum+=vec[i];
    }
    for (ll i = 0; i < u1; i++)
    {
        sum+=pec[i];
    }
    if((n-sum)<=0){cout<<"I become the guy.";}
    else{cout<<"Oh, my keyboard!";}
    

    return 0;
}