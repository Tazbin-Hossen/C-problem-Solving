#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,ans=0;
    cin>>n;
    while(n>0)
    {
        ll x=n%10;
        ans+=x;
        n/=10;
        x=0;
    }
    string temp=to_string(ans);
    string temp2=to_string(ans);
    reverse(temp.begin(),temp.end());
    if(temp==temp2){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
    return 0;
}