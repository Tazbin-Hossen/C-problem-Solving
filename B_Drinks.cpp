#include<bits/stdc++.h>
#include<iomanip>
#include<vector>
#define ll long long
using namespace std;
int main(){
    long double n; cin>>n;
    long double sum=0;
    vector<ll>vec;
    for(ll i=0;i<n;i++)
    {
        long double x; cin>>x;
        vec.push_back(x);
    }
    for(ll j=0;j<vec.size();j++)
    {
        long double xx=vec[j]/100.00;
        sum=sum+xx;
    }
    long double ans=(sum*100.00)/n;
    cout<<fixed<<setprecision(12)<<ans;
    return 0;
}