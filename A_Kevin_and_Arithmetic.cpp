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
        ll n,odd=0,even=0; cin>>n;
        vector<ll>vec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for(auto x:vec)
        {
            if(x%2==0){even++;}
            else{odd++;}
        }
        if(even>=1){cout<<odd+1<<nl;}
        else if(even==0&&odd>1){cout<<odd-1<<nl;}
        
        else{cout<<0<<nl;}  
     }
    return 0;
}