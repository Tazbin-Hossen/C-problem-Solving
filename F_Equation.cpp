#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
int main(){
   ll a,b; cin>>a>>b;
   ll sum=0;
   for(ll i=2;i<=b;i=i+2)
   {
    ll x=pow(a,i);
    sum+=x;
   }
   cout<<sum<<endl;
    return 0;
}