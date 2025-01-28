#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    for(ll i=1;i<=n;i++)
    {
       for(ll j=1;j<=(n-i);j++)
       {
        cout<<" ";
       }
       for(ll m=1;m<=i;m++)
       {
        cout<<"*"<<" ";
       }
       cout<<endl;
    }

    return 0;
}