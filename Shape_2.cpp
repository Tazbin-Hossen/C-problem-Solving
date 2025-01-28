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
        cout<<"*";
        for(ll j=2;j<=i;j++)
        {
            cout<<"*";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}