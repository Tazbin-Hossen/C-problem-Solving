#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>vec;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for(ll j=0;j<=vec.size()-1;j++)
        {
            for(ll k=j+1;k<vec.size();k++)
            {
                if(vec[j]==vec[k])
                {
                  count++;
                }
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}