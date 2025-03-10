#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n; cin>>n;
     bool ans=false;
     vector<ll>vec; 
     for (ll i = 0; i < n; i++)
     {
        ll x; cin>>x;
        vec.push_back(x);
     }
     for (ll i = 0; i < n-2; i++)
     {
        if(vec[i]==vec[i+1] && vec[i]==vec[i+2])
        {
            ans=true;
            break;
        }
     }
     if(ans==true)
     {
        cout<<"Yes";
     }
     else
     {
        cout<<"No";
     }
     
     
    return 0;
}