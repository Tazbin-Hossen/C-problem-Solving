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
        ll n; cin>>n;
        bool ans=true;

        while(n>1)
        {
            if(n%2!=0){ans=false;break;}
            n=n/2;
        }
        if(ans==false){cout<<"YES"<<nl;}
        else{cout<<"NO"<<nl;}
     }
    return 0;
}