#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a , b ,c, d;
     cin>> a >> b >> c >>d;
     if( b * log(a) > d * log (c))
     {
        cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
    return 0;
}