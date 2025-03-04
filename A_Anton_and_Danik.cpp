#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    string s; cin>>s;
    ll aa=0,dd=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='A'){aa++;}
        else{dd++;}
    }
    if(aa>dd){cout<<"Anton";}
    else if(dd>aa){cout<<"Danik";}
    else{cout<<"Friendship";}
    return 0;
}