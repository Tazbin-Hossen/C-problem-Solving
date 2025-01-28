#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
      ll n; cin>>n; 
      vector<ll>vec;
      for(ll m=0;m<n;m++)
      {
        ll x; cin>>x;
        vec.push_back(x);
      }
      ll ans=INT_MAX;
      for(ll i=0;i<(n-1);i++)
      {
        for(ll j=i+1;j<n;j++)
        {
            ll sum=vec[i]+vec[j]+j-i;
            if(sum<=ans){ans=sum;}
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}