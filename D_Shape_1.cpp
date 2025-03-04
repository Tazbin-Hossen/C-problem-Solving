#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    char ch; ll n; cin>>ch>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++){ll x; cin>>x; vec.push_back(x);}
    for(ll i=0;i<vec.size();i++)
    {
        for(ll j=1;j<=vec[i];j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}