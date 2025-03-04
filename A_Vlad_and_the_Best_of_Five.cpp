#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll A=0,B=0;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]=='A'){A++;}
            else{B++;}
        }
        if(A>B){cout<<"A"<<endl;}
        else{cout<<"B"<<endl;}
    }
    return 0;
}