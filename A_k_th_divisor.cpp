#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n,k; cin>>n>>k;
    vector<ll>vec;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i){vec.push_back(i);}
            else
            {
                vec.push_back(i);
                vec.push_back(n/i);
            }
        }
    }
    sort (vec.begin(),vec.end());
    if(vec.size()<k){cout<<-1;}
    else{cout<<vec[k-1];}
    return 0;
}