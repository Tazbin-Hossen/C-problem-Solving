#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n,total=0; cin>>n;
     string s; cin>>s;
     for(auto x:s)
     {
       
        ll m=x-'0';
        total+=m; 
     }
     cout<<total;
    return 0;
}