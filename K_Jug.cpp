#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,sum=0; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++){ll x; cin>>x; vec.push_back(x);}
    for(auto x:vec){sum+=x;}
    cout<<abs(sum);
    return 0;
}