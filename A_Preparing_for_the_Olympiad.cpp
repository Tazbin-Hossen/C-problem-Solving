#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll mono=0,n; cin>>n;
        vector<ll>vec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        vector<ll>pec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin>>x;
            pec.push_back(x);
        }
        
        for (ll i = 0; i <vec.size()-1; i++)
        {
         if(vec[i]-pec[i+1]>0){mono+=(vec[i]-pec[i+1]);}   
        }
        mono+=vec[n-1];
        cout<<mono<<endl;
    }
    return 0;
}