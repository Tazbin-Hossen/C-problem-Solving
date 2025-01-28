#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    bool ans;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll i=0;i<vec.size();i++)
    {
        if(vec[i]==0){ans=true;}
        else{ans=false;break;}
    }
    if(ans==true){cout<<"EASY";}
    else{cout<<"HARD";}
    return 0;
}