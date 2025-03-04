#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        while(n>0)
        {
            cout<<n%10<<" ";
            n/=10;
        }
        cout<<endl;
    }
    return 0;
}