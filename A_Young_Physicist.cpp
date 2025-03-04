#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    ll a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    ll x=(a+d+g),y=(b+e+h),z=(c+f+i);
    if(x==0&&y==0&&z==0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}