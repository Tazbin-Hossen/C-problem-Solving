#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll h,m;cin>>h>>m;
        if(h==0){cout<<(24*60)-(m)<<endl;}
        else if(m==0){cout<<(24*60)-(h*60)<<endl;}
        else if(h==0&&m==0){cout<<(24*60)<<endl;}
        else{cout<<(24*60)-((h*60)+m)<<endl;}
    }
    return 0;
}