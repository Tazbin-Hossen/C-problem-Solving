#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll x;
        if(n==0){cout<<"0"<<" ";}
        while(n>0)
        {
            x=n%10; n/=10;
            cout<<x<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}