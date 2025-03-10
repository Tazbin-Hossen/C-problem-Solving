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
        ll a,b; 
        cin>>a>>b;
        ll t1=a,t2=b;
        while(b!=0)
        {
            ll remm=a%b;
            ll a=b,b=remm;
        }
        ll lcm=(t1*t2)/t1;
        cout<<lcm<<" "<<a<<nl;
     }
    return 0;
}