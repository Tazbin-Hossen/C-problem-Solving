#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a, b, c;
     cin>>a>>b>>c;
     for (ll i = 1; i <= 1000; i++)
     {
        ll ans = c*i;
        if(ans>=a and ans<=b)
        {
            cout<<ans;
            break;
            
        }
        else if(ans>b)
        {
            cout<<-1;
            break;
        }
     }
     
    return 0;
}