#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    for(ll j=1;j<=n;j++)
    {
        for(ll i=1;i<=(n-j);i++)
        {
            cout<<" ";
        }
        for(ll m=1;m<=j;m++)
        {
            cout<<m;
            if(m>=2){cout<<m+1;}
        }
        cout<<endl;
        
    }
    cout<<endl;
    return 0;
}