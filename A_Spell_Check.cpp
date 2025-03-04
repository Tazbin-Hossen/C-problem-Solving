#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    for (ll i = 1; i*i<=n; i++)
    {
       if(n%i==i){cout<<i<<" ";}
       else{
        cout<<n/i<<" ";
       }
    }
    
    return 0;
}