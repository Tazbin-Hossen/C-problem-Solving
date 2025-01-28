#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    ll ans=1;
    for(ll i=0;i<s.length();i++)
    {
        for(ll j=0;j<s.length();j++)
        {
            if(s[i]!=s[j]){ans++;}
        }
    }
    if(ans%2==0){cout<<"CHAT WITH HER!";}
    else{cout<<"IGNORE HIM!";}
    return 0;
}