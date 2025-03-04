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
        ll n,count=0;cin>>n;
        ll j=sqrt(n);
        for(ll i=1;i<=j;i++)
        {
            if(n%i==0)
            {
                if(n/i==i){count++;}
                else{count+=2;}
            }
        }
        cout<<count<<nl;
    }

    
    return 0;
}