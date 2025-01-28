#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        ll minimum=min({a,b,c});
        ll maximum=max({a,b,c});
        if((a==maximum||a==minimum) && (b==minimum||b==maximum)){cout<<c<<endl;}
        else if((b==maximum||b==minimum)&& (c==maximum||c==minimum)){cout<<a<<endl;}
        else{cout<<b<<endl;}
    }
    return 0;
}