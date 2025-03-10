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
        ll n,k; cin>>n>>k;
        ll gold=0,donate=0;
        vector<ll>vec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            if(vec[i]>=k)
            {
                gold+=vec[i];
            }
            else if(gold>=1 && vec[i]==0)
            {
                donate++;
                gold--;
            }
        }
        cout<<donate<<nl;   
     }
    return 0;
}