#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    vector<pair<ll,ll>>vec;
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i].first>>vec[i].second;
    }
    cout<<vec[0].first<<vec[0].second;
    return 0;
}