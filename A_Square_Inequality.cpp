#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b,c;
     cin>>a>>b>>c;
     if((a*a)+(b*b)<(c*c))
     {
        cout<<"Yes";
     }
     else
     {
        cout<<"No";
     }
    return 0;
}