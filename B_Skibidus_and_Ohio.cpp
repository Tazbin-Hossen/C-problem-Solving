#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        ll count=0,count2=0;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]==str[i+1]){count++;}
            else{count2++;}
        }
        if(count>=1){cout<<1<<endl;}
        else{cout<<str.length()<<endl;}
    }
    return 0;
}