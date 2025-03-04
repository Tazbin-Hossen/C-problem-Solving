#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n,m; cin>>n>>m;
    string str; cin>>str;
    vector<ll>vec(26,0);
    for(ll i=0;i<str.length();i++)
    {
        ll index=str[i]-'a';
        vec[index]++;
    }
    sort(vec.begin(),vec.end());
    ll distinct=0;
    vector<ll>ans;
    for(ll j=0;j<vec.size();j++)
    {
        if(vec[j]!=0){distinct++;}
        // cout<<vec[j]<<endl;
        if(vec[j]>0){ans.push_back(vec[j]);}
    }
    if(distinct<=m)
    {
        cout<<m-distinct;
        return 0;
    }
    ll sum=0,sz=distinct-m;
    for(ll i=0;i<sz;i++)
    {
        // cout<<ans[i]<<" ";
        sum+=ans[i];
    }
    cout<<sum;


    return 0;
}