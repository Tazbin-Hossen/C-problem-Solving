#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    ll start=0;ll end=n-1;
    bool ans=false;
    while(start<=end)
    {
        if(vec[start]!=vec[end])
        {
            ans=false;
            break;    
        }
        else
        {
            ans=true;
        }
        start++;
        end--;
    }
    if(ans==true){cout<<"YES"<<endl;}
    else{cout<<"NO";}

    return 0;
}