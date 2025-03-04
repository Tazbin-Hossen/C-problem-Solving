#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b,count=0; cin>>a>>b;
    vector<ll>vec;
    for(ll i=0;i<a;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll i=0;i<a;i++)
    {
        if(vec[i]>b){count+=2;}
        else{count++;}
    }
    cout<<count;
    return 0;
}