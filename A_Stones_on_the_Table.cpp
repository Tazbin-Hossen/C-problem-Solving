#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,count=0; cin>>n;
    string str;cin>>str;
    for(ll i=0;i<n-1;i++)
    {
        if(str[i]=='R'&& str[i]==str[i+1]){count++;}
        if(str[i]=='B'&& str[i]==str[i+1]){count++;}
        if(str[i]=='G'&& str[i]==str[i+1]){count++;}
    }
    cout<<count;
    return 0;
}