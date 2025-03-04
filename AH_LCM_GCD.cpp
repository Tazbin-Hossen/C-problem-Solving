#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        ll ans=__gcd(a,b);
        cout<<(a*b)/ans<<" "<<ans<<endl;
        ans=0;
    }
    return 0;
}