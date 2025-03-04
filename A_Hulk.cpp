#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    for(ll i=1;i<=n;i++)
    {
        if(i%2!=0&&i==n){cout<<"I hate it ";}
        else if(i%2!=0){cout<<"I hate that ";}
        else if(i%2==0 && i!=n){cout<<"I love that ";}
        else if(i%2==0){cout<<"I love it ";}
    }
    return 0;
}