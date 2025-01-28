#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    ll count=0;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(b-a>=2){count++;}
    }
    cout<<count;
    return 0;
}