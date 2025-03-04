#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    vector<ll>pec;
    for(auto ans:vec)
    {
        if(ans>0){pec.push_back(1);}
        else if(ans==0){pec.push_back(0);}
        else{pec.push_back(2);}
    }
    for(auto ans:pec)
    {
        cout<<ans<<" ";
    }
    return 0;
}