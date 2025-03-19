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
        ll a,b; cin>>a>>b;
        ll t1 = a, t2 = b;
        while(b!=0)
        {
            ll rem = a%b;
            a = b;
            b = rem;
        }
        cout<<(t1*t2)/a<< " " << a <<endl;
     }
    return 0;
}