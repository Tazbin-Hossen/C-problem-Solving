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
        string s1,s2; cin>>s1>>s2;
        ll x =s1.length(), y = s2.length();
        ll z = max(x,y);
        for (ll i = 0; i < z; i++)
        {
            cout<<s1[i]<<s2[1];
        }
        cout<<nl;
        
     }
    return 0;
}