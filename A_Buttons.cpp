#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b;
     cin>>a>>b;
     if(a==b)
     {
        cout<<a+b;
     }
     else
     {
        cout<<max(a,b)+(max(a,b)-1);
     }
    return 0;
}