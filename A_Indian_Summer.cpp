#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    vector<pair<string,string>>p;
    for (ll i = 0; i < n; i++)
    {
        string x,y; cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    ll ans=unique(p.begin(),p.end())-p.begin();
    cout<<ans;
    return 0;
}
