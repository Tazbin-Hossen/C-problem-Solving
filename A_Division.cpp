#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n>=1900){cout<<"Division 1"<<endl;}
        else if(n>=1600 && n<=1899){cout<<"Division 2"<<endl;}
        else if(n>=1400 && n<=1599){cout<<"Division 3"<<endl;}
        else{cout<<"Division 4"<<endl;}
    }
    return 0;
}