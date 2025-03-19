#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n; cin>>n;
     for(ll i = n+1 ; i <= 9012 ; i++)
     {
        ll temp2 = i,temp =i;
        ll d4 = temp2%10;
        temp2 = temp2/10;
        ll d3 = temp2%10;
        temp2 = temp2/10;
        ll d2 = temp2%10;
        temp2 = temp2/10;
        ll d1 = temp2;
        if(d1!=d2 and d1!=d3 and d1!=d4 and d2!=d3 and d2!=d4 and d3!=d4)
        {
            cout<<temp;
            return 0;
        }
     }
    return 0;
}