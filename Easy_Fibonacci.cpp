#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    if(n>=1){cout<<"0"<<" ";}
    if(n>=2){cout<<"1"<<" ";}
    ll a=0,b=1;
    for(ll i=3;i<=n;i++)
    {
      ll sum=a+b;
      cout<<sum<<" ";
      a=b,b=sum;
    }
    return 0;
}