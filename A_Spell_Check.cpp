#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll n,t=0,i=0,m=0,u=0,r=0; cin>>n;
        string str; cin>>str;
        for(auto x:str)
        {
            if(x=='T') {t++;}
            if(x=='i') {i++;}
            if(x=='m') {m++;}
            if(x=='u') {u++;}
            if(x=='r') {r++;}
        }
        if(t==1&&i==1&&m==1&&u==1&&r==1&&n==5) {cout<<"YES"<<nl;}
        else{cout<<"NO"<<nl;}
     }
    return 0;
}