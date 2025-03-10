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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans=(a/(b+c+d));
        ll mod1=a%(b+c+d);
        if(mod1!=0)
        {
            if(mod1-b<=0)
            {
                ans=(ans*3)+1;
                cout<<ans<<nl;
            }
            if(mod1-b>0)
            {
                ans=(ans*3)+1;
                mod1-=b;
                if(mod1-c<=0)
                {
                    ans++;
                    cout<<ans<<nl;
                }
                else
                {
                    ans=ans+2;
                    cout<<ans<<nl;
                }
            }
        }
        else
        {
            cout<<ans*3<<nl;    
        }
     }
    return 0;
}