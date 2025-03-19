#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b; cin>>a>>b;
     if(a>b)
     {
        cout<<a-b;
     }
     else if(a == b)
     {
        cout<<1;
     }
     else
     {
        ll x = 2*a;
        if(x>b and x-b<a)
        {
           cout<<x-b;
        }
        else if (x==b)
        {
            cout<<1;
        }
        else
        {
            cout<<(a*b)/b-1;
        }
     }
    return 0;
}