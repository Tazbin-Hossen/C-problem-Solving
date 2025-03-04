#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n,k,p;
        cin>>n>>k>>p;
        ll ans=abs(k)/p,ans2=abs(k)-(ans*p);
        if(ans2>0)
        {
            if(ans2<=p)
            {
                ans+=1;
                if(ans<=n){cout<<ans<<endl;}
                else{cout<<-1<<endl;}
            }

        }
        else if(ans>n){cout<<-1<<endl;}
        else{cout<<ans<<endl;}
        
    }
    return 0;
}