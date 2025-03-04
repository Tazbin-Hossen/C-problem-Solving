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
    swap(*max_element(vec.begin(),vec.end()),*min_element(vec.begin(),vec.end()));
    for(auto x:vec)
    {
        cout<<x<<" ";
    }
    return 0;
}