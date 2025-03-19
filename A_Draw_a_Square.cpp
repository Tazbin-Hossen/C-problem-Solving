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

      ll l,r,u,d;
      cin>>l>>r>>u>>d;
      ll x=sqrt((l*l)+(d*d)),y=sqrt((l*l)+(u*u));
      ll z=sqrt((r*r)+(d*d)),p=sqrt((r*r)+(u*u));
      if(x==y && y==z && z==p && (u+d)==(l+r))
      {
        cout<<"Yes"<<nl;

      }
      else
      {
        cout<<"No"<<nl;
      }
      
      }
    return 0;
}