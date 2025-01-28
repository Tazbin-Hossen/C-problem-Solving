#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll ans=0;
    while(n>0)
    {
        if(n>=5)
        {
            ll m=(n/5);
            ans+=m;
            n=n-(m*5);
            m=0;
        }
        else if(n==4)
        {
            ll x=(n/4);
            ans+=x;
            n=n-(x*4);
            x=0;
        }
        else if(n==3)
        {
            ll x=(n/3);
            ans+=x;
            n=n-(x*3);
            x=0;
        }
        else if(n==2)
        {
            ll x=(n/2);
            ans+=x;
            n=n-(x*2);
            x=0;
        }
        else
        {
            ll x=(n/1);
            ans+=x;
            n=n-(x*1);
            x=0;
        }
    }
    cout<<ans;
    return 0;
}