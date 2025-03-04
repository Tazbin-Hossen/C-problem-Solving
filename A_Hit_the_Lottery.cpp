#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll total=0;
    while(true){
    if(n>=100)
    {
        ll ans=n/100;
        n=n-(ans*100);
        total+=ans;
    }
    else if(n>=20&&n<100)
    {
        ll ans=n/20;
        n=n-(ans*20);
        total+=ans;
    }
    else if(n>=10&&n<20)
    {
        ll ans=n/10;
        n=n-(ans*10);
        total+=ans;
    }
    else if(n>=5&&n<10)
    {
        ll ans=n/5;
        n=n-(ans*5);
        total+=ans;
    }
    else
    {
        total+=n;
        break;
    }
    }
    cout<<total;
    total=0;
    return 0;
}