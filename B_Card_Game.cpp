#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c,d,x=0,y=0; cin>>a>>b>>c>>d;
        if(a>c&&b>d){x+=2;}
        if(b>c&&a>d){y+=2;}
        cout<<x+y<<endl; 
    }
    return 0;
}