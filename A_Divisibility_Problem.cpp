#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll a,b;; cin>>a>>b;
        ll ans=a/b;
        ll ans2=b*(ans+1);
        if(a%b==0){cout<<0<<endl;}
        else{cout<<ans2-a<<endl;}
    }
    return 0;
}