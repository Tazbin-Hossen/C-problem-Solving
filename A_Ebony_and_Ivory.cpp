#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a, b, c; cin>>a>>b>>c;
     for (ll i = 0; i <= c; i+=a)
     {
        for (ll j = 0; j <= c; j+=b)
        {
            if(i+j == c)
            {
                cout<<"Yes";
                return 0;
            }
        }
        
     }
     cout<<"No";
     
    return 0;
}