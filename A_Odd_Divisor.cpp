#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n<10 && n%2!=0){cout<<"YES"<<endl;}
        else
        {
            ll x=n%10;
            if(x%2!=0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}