#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    while(n--)
    {
        ll x; cin>>x;
        ll maximum=INT_MIN;
        for(ll i=1;i<x;i++)
        {
           for(ll j=i+1;j<x;j++)
           {
            ll mm=__gcd(i,j);
           if(mm>=maximum){maximum=mm;} 
           }
        }
        cout<<maximum<<endl;
    }
    return 0;
}