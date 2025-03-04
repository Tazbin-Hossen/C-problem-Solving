#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=a+b,y=c-b,z=d-c;
        if(x!=y && x!=z && y!=z){cout<<"1"<<endl;}
        else if(x==y && y==z && x==z){cout<<"3"<<endl;}
        else{cout<<"2"<<endl;}
    }
    return 0;
}