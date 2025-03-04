#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    bool ans=true;
    while(n>0)
    {
        ll x=n%10;
        if(x!=4 || x!=7){ans=false;break;}
        n=n/10;
    }
    if(ans==false){cout<<"NO";}
    else{cout<<"YES";}

    return 0;
}