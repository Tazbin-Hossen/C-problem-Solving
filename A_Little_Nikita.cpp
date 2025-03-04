#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(a<b){cout<<"No"<<endl;}
        else if(a==b){cout<<"Yes"<<endl;}
        else
        {
            if((a-b)%2==0){cout<<"Yes"<<endl;}
            else{cout<<"No"<<endl;}
        }
    }
    return 0;
}