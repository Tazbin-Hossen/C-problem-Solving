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
        ll div=(n/15),div2=(n-(15*div))+1;
        if(div2>=3){cout<<(div*3)+3<<nl;}
        else{cout<<(div*3)+div2<<nl;}

    }
     
    return 0;
}