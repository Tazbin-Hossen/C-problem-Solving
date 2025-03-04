#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(a==1&&b==1){cout<<1<<endl;}
        else{cout<<abs(a-b)<<endl;}
    }
    
    return 0;
}