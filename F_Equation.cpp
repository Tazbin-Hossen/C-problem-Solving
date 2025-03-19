#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b,ans=0;  cin>>a>>b;
     ll x = a;
     for( ll i = 0; i <= b ;i+=2)
     {
         ans+=x;
         x*=x;
     }
     cout<<ans-b;
    return 0;
}