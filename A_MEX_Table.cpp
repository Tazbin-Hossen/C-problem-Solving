#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll a,b; cin>>a>>b;
        if(a>b){cout<<a+1<<nl;}
        else if(a==1 && b==1){cout<<2<<nl;}
        else{cout<<b+1<<nl;}
     }

    return 0;
}