#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll m,a,b,c; cin>>m>>a>>b>>c;
        ll ans=0,extra=0;
        if(m>=a){ans+=a;extra+=(m-a);}
        if(m>=b){ans+=b;extra+=(m-b);}
        if(a>m){ans+=m;}
        if(b>m){ans+=m;}
        if(extra>=c){ans+=c;}
        if(extra<c){ans+=extra;}
        cout<<ans<<nl;
     }
    return 0;
}