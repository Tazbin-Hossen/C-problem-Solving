#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        ll count=0;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]=='1'){count++;}
        }
        cout<<count<<endl;
        count=0;

    }
    return 0;
}