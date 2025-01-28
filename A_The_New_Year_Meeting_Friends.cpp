#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b,c; cin>>a>>b>>c;
    ll maximum=max({a,b,c}),minimum=min({a,b,c});
    cout<<abs(maximum-minimum);
    return 0;
}