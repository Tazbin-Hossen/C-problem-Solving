#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>vec;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        ll one=0,two=0;
        for(auto ans:vec )
        {
            if(ans==1){one++;}
            else{two++;}
        }
        if((n%2==0)&&(one%2==0 && two%2==0)){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}