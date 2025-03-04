#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,turn=1; cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++){ll x; cin>>x; vec.push_back(x);}
    ll s=0,d=0;
    while(!vec.empty())
    {
        if(turn==1)
        {
            if(vec[0]>vec.back())
            {
                s+=vec[0];
                vec.erase(vec.begin());
                turn=2;
            }
            else
            {
                s+=vec.back();
                vec.pop_back();
                turn=2;
            }
        }
        else
        {
            if(vec[0]>vec.back())
            {
                d+=vec[0];
                vec.erase(vec.begin());
                turn=1;
            }
            else
            {
                d+=vec.back();
                vec.pop_back();
                turn=1;
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}