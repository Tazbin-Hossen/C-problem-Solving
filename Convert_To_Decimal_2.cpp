#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
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