#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n=4; 
     vector<ll>vec;
     for (ll i = 0; i < n; i++)
     {
        ll x; cin>>x;
        vec.push_back(x);

     }
     sort(vec.begin(),vec.end());
     for(int i=0;i<n-1;i++) cout<<vec[n-1]-vec[i]<<" ";
     

     
    return 0;
}