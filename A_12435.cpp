#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n=5,count=0,ans=0;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        vec.push_back(x);
    }
    for(ll m=0;m<n;m++)
    {
        if(vec[m]>vec[m+1])
        {
            swap(vec[m],vec[m+1]);
            break;
        }
        else{ans++;}
    }
    for(ll j=0;j<n;j++)
    {
        if(vec[j]==(j+1)){count++;}
    }
    if(count==5)
    {
        if(ans==5){cout<<"No";}
        else{cout<<"Yes";}
    }
    else{cout<<"No";}
    return 0;
}