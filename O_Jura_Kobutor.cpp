#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool cmp(const pair<ll,ll>&p1,const pair<ll,ll>&p2)
{
    if(p1.first>p2.first){return 1;}
    else if(p1.first == p2.first){return p1.first<p2.first;}
    else {return 0;}
}
int main(){
    optimize();
    vector<pair<ll,ll>>v;
    v={{4,143},{3,120},{4,500},{1,20}};
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){cout<<u.first <<" "<<u.second<<endl;}
    return 0;
}