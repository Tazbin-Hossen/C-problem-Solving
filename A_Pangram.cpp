#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n; cin>>n;
     vector<char>vec;
     for (ll i = 0; i < n; i++)
     {
        char x; cin>>x;
        vec.push_back(x);
     }
     vector<char>vec2;
     for(ll i=0;i<n;i++)
     {
        char y=(char)tolower(vec[i]);
        vec2.push_back(y);
     }
     sort(vec2.begin(),vec2.end());
     ll dis=unique(vec2.begin(),vec2.end())-vec2.begin();
     if(dis>=26) { cout<<"YES";}
     else{cout<<"NO";}
    
    return 0;
}