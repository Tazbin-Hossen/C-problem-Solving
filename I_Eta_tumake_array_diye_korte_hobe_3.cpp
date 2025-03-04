#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,sum=0; cin>>a>>b;
        for(ll i=min(a,b)+1;i<max(a,b);i++)
        {
            if(i%2!=0){sum+=i;}
        }
        cout<<sum<<endl;
    }
    return 0;
}