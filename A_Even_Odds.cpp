#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    vector<ll>vec;
    for(ll i=1;i<=a;i=i+2){vec.push_back(i);}
    for(ll i=2;i<=a;i=i+2){vec.push_back(i);}
    cout<<vec[b-1];
    return 0;
}