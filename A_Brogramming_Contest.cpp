#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n,count=0; cin>>n;
        string str;
        cin>>str;
        for(ll i=1;i<n;i++)
        {
            if(str[i]!=str[i-1]){count++;}
        }
        if(str[0]=='1'){count++;}
        cout<<count<<endl;
    }
    return 0;
}