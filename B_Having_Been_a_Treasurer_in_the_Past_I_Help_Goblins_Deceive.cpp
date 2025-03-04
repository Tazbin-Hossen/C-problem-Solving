#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
    ll t; cin>>t;
    while(t--)
    {
        ll n,minus=0,underscore=0; cin>>n;
        string s; cin>>s;
        for(auto x:s)
        {
            if(x=='_'){underscore++;}
            if(x=='-'){minus++;}
        }
        ll formula=(minus/2)*(minus-(minus/2))*underscore;
        cout<<formula<<nl;
        formula=0; 
    }
    
    return 0;
}