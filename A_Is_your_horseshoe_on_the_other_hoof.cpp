#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    vector<ll>vec;
    for(ll i=0;i<4;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    ll dis=unique(vec.begin(),vec.end())-vec.begin();
    cout<<4-dis;
    return 0;
}