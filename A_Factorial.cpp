#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll ans=1;
    for(ll i=1;i<=n;i++)
    {
        ans*=i;
    }
    cout<<ans;
    return 0;
}