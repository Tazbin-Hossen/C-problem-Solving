#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll uppercasee=0,lowercasee=0;
    string str;cin>>str;
    for(ll i=0;i<n;i++)
    {
        if(str[i]==toupper(str[i])){uppercasee++;}
        else{lowercasee++;}
    }
    if(uppercasee>0&&lowercasee>0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}