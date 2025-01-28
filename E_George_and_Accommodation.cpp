#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    ll count=0;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        if(n<=(m-2)){count++;}
    }
    cout<<count<<endl;
    count=0;
    return 0;
}