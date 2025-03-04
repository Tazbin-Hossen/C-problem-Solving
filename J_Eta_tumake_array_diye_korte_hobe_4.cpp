#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll power=1,ans=0;
        while(n>0)
        {
            ll rem=n%2;
            n/=2;
            if(rem==1)
            {
                 rem=rem*(power);
                 power=power*2;
                 ans+=rem;
            }
        }
        cout<<ans<<endl;
            ans=0;
    }
    return 0;
}