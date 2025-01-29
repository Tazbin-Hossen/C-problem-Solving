#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    ll cc=1;
    while(t--)
    {
        ll n; cin>>n;
        bool ans=false;
        string str;
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            ll x; cin>>x; vec.push_back(x);
        }
        for(ll j=0;j<vec.size();j++)
        {
            if(vec[j]%2==0)
            {
                ans=true; str+='1';
            }
            else{
                if(ans==true)
                {
                    str+='0';
                }
            }
        }
        
        cout<<"Case "<<cc<<": "<<str<<endl;
        cc++;str;
    }

    return 0;
}