#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    ll temp=n;
    for (ll i = 1; i <=n; i++)
    {
       for (ll j = 1; j <=temp; j++)
       {
        cout<<"*";
       }
       temp--;
       cout<<endl;
    }
    return 0;
}