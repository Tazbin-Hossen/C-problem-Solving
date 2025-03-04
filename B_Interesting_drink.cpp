#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll shop; cin>>shop;
    vector<ll>s;
    for(ll i=0;i<shop;i++)
    {
        ll x; cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    ll day; cin>>day;
    while(day--)
    {
        ll d; cin>>d;
        ll sz=upper_bound(s.begin(),s.end(),d)-s.begin();
        cout<<sz<<endl;
    }
    return 0;
}