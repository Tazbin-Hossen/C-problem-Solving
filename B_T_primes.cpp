#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n,cnt=0;
     cin>>n;
     for (ll i = 0; i < n; i++)
     {
        for (ll j = 0; j < n; j++)
        {
            cnt = cnt+1;
        }
     }
     cout<<cnt;
    return 0;
}